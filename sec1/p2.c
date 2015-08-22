#include <stdio.h>
void main()
{
    double f, c;
    scanf("%lf", &f);
    c = 5*(f-32)/9;
    printf("%.3lf\n", c);
}
