#include <stdio.h>
int multiply();
void main()
{
    int c;
    c = multiply();
    printf("multiply is %d", c);
}
int multiply()
{
    int a, b;
    printf("enter a and b : ");
    scanf("%d%d", &a, &b);
    return a * b;
}