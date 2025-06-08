#include <stdio.h>
void divide();
void main()
{
    printf("\n okay divide broo..!!");
    divide();
}
void divide()
{
    int a, b;
    printf("enter a and b : ");
    scanf("\n %d%d", &a, &b);
    printf("\n divide is : %d ", a / b);
}