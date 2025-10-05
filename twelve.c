#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Natural Number : ");
    scanf("%d", &n);
    printf("Sum of all Natural Numbers upto %d is : %d", n, n * (n + 1) / 2);
    return 0;
}