#include <stdio.h>

void main()
{
    int n;
    float price;
    scanf("%d", &n);
    price =n * 95;
    if(price >= 300)
        price*=0.85;

    printf("%.2f\n", price);
}
