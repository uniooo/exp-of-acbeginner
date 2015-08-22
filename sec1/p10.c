#include <stdio.h>

void main()
{
    int n;
    int flag = 0;
    scanf("%d", &n);
    if ( n % 100 == 0)
    {
        if(n % 400 == 0)
            flag = 1;
    } else {
        if(n % 4 == 0)
            flag = 1;
    }
    if (flag == 1) printf("yes\n");
    else printf("no\n");
}
