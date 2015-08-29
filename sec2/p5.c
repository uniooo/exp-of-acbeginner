#include <stdio.h>

void main()
{
   FILE *fin, *fout;
   fin = fopen("stat.in", "rb");
   fout = fopen("stat.out", "wb");
   int n, m, i;
   int a[1000];
   int count = 0;
   fscanf(fin, "%d", &n);
   for(i=0; i<n; i++)
   {
       fscanf(fin, "%d", &a[i]);
   }
   fscanf(fin, "%d", &m);
   for(i=0; i<n; i++)
   {
       count += (a[i]<m)?1:0;
   }
   fprintf(fout, "%d", count);
   fclose(fin);
   fclose(fout);
}
