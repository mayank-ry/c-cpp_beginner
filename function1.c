#include <stdio.h>
int sum();
void main()
{
    int a;
    a = sum();
    printf("sum is %d", a);
}
int sum()
{
    int a, b;
    printf("enter a and b : ");
    scanf("%d%d", &a, &b);
    return a + b;
}
