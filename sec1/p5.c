#include <stdio.h>
#include <math.h>

void main()
{
    float x1, x2, y1, y2;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    printf("%f\n", sqrt(pow((x1-x2),2)+pow((y1-y2),2)));
}

