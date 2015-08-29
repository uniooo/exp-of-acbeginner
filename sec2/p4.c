#include <stdio.h>

void main()
{
    int n, i, j;
    FILE *fin, *fout;
    fin = fopen("triangle.in", "rb");
    fout = fopen("triangle.out", "wb"); 
    fscanf(fin, "%d", &n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<i; j++)
            fprintf(fout, " ");
        for(j=i; j<2*n-i-1; j++)
            fprintf(fout, "#");
        fprintf(fout, "\n");
    }

    fclose(fin);
    fclose(fout);
}
