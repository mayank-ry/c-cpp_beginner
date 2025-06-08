#include <stdio.h>
void multiply();
void main()
{
    printf("\n Going to print multiply ");
    multiply();
}
void multiply()
{
    int a, b;
    printf("\n enter numbers to print multiply : ");
    scanf("%d%d", &a, &b);
    printf("\n multiply is : %d", a * b);
}