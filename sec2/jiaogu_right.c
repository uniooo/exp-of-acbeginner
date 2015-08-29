#include <stdio.h>

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    while(n>1)
    {
        if(n%2 == 1)
        {
             n /= 2;
             n = n*3 + 2;
             count++;
        }
        else n /= 2;
        count++;
    }
    printf("%d\n", count);
    return 0;
} 

