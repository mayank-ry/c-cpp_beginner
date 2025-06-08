#include <stdio.h>
int multiply(int x, int y)
{
    return x * y;
}
int main()
{
    int result = multiply(12, 6);
    printf("\n result is : %d ", result);
    return 0;
}