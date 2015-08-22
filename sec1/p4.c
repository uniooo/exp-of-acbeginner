#include <stdio.h>
#include <math.h>

void main()
{
    const double pi = 4 * atan(1);
    int n;
    double arc;
    scanf("%d", &n);
    arc = n * pi / 180;
    printf("%lf %lf\n", sin(arc), cos(arc));
}
