#include <stdio.h>

void main()
{
/*    freopen("daffodil.out", "w", stdout); */
    int i, a, b, c;
    for(i=100; i<1000; i++)
    {
        a = i/100;
        b = (i%100)/10;
        c = (i%10);
/*        printf("%d %d %d\n", a, b, c); */
        if(i == (a*a*a + b*b*b + c*c*c)) printf("%d\n", i);
    }
}
