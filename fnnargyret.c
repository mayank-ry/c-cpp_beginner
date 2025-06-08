#include <stdio.h>
void sum();
void main()
{
    printf("\n going to print sum ");
    sum();
}
void sum()
{
    int a, b;
    printf("\n enter a and b  : ");
    scanf("%d%d", &a, &b);
    printf("sum is : %d", a + b);
}