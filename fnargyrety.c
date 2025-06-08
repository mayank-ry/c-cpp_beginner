#include <stdio.h>
int sum(int x, int y)
{
    return x + y;
}
int main()
{
    int result = sum(45, 65);
    printf("\n result is : %d ", result);
    return 0;
}