#include <stdio.h>

void swap(int* a, int* b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
void main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a >= b) swap(&a, &b);
    if(a >= c) swap(&a, &c);
    if(b >= c) swap(&b, &c);
    if((a+b) <= c)
    {
        printf("not a triangle\n");
        return;
    }
    if(a*a + b*b == c*c)
        printf("yes\n");
    else
        printf("no\n");
}

