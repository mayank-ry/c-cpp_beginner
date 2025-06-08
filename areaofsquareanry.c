#include <stdio.h>
int square()
{
    int side;
    printf("enter side of square : ");
    scanf("%d", &side);
    return side * side;
}
void main()
{
    int result = square();
    printf("\n area of square is : %d ", result);
}