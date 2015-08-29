#include <stdio.h>

void main()
{
    freopen("harmony.in", "r", stdin);
    FILE* fout;
    fout = fopen("harmony.out", "w");
    
    int i, n;
    double h = 0;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        h += 1.0/i;
    }
    fprintf(fout, "%.3lf\n", h);
    fclose(fout);
}
