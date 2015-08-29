#include <stdio.h>
#include  <math.h>

void main()
{
    int i, a, b, c, pr, prx;
    double div;
    scanf("%d %d %d", &a, &b, &c);
    div =  a*1.0/b;
    pr = floor(div);
/*    printf("%.4lf\n", div);*/
    printf("%d.", pr);
    for(i=0; i<c-1; i++)
    {
        div -= pr;
        div *= 10;
        pr = floor(div);
        printf("%d", pr);
    }
    div -= pr;
    div *= 10;
    pr = floor(div);
    div -= pr;
    div *= 10;
    prx = floor(div);
    if(prx>=5) pr++;
    printf("%d", pr);
    printf("\n");
}
