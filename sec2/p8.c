#include <stdio.h>

void main()
{
    freopen("subsequence.in", "r", stdin);
    freopen("subsequence.out", "w", stdout);

    int n, m, i;
    double sum=0, x=0;
    scanf("%d %d", &n, &m);
    for(i=n; i<=m; i++)
    {
        x = (1.0/i)/i;
        sum += x;
    }
    printf("%.5lf\n", sum);
}

