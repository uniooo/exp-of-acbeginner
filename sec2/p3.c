#include <stdio.h>

void main()
{
    int a,b,c;
    freopen("hanxin.in", "r", stdin);
    freopen("hanxin.out", "w", stdout);
    scanf("%d %d %d", &a, &b, &c);
    int i, flag = 0;
    for(i=10; i<=100; i++)
    {    
        if((i%3==a)&&(i%5==b)&&(i%7==c))
        {
            printf("%d\n", i);
            flag = 1;
        }
    }
    if(flag == 0) printf("No answer\n");
}

