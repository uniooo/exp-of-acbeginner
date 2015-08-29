#include <stdio.h> 

int a[10]; 
void init()
{ int i;
  for(i=0; i<10; i++)
     a[i] = 0;
}


void get(int i)
{
    int g, s, b;
    g = i % 10;
    s = (i/10) % 10;
    b = i/100;
    a[g] = 1;
    a[s] = 1;
    a[b] = 1;
}


void main()
{
    int i, j, k, sum, s;
    for(i=123; i*3<987; i++)
    {
       init();
       j = 2 * i;
       k = 3 * i;
       get(i);
       get(j);
       get(k);
       sum = 0;
       for(s=1; s<10; s++)
           sum += a[s];
       if(sum == 9) printf("%d %d %d\n", i, j, k);
    }
}
