#include <stdio.h>

void main()
{
    freopen("digit.in", "r", stdin);
    freopen("digit.out", "w", stdout);
    int n;
    int count = 0;
    scanf("%d", &n);
    while(n/=10)
        count++;
    printf("%d\n", count+1);
}
