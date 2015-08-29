#include <stdio.h>

void main()
{
    int a,b,c;
    double div;
    scanf("%d %d %d", &a, &b, &c);
    div = 1.0*a/b;
    printf("%.*lf\n", c, div);
}
