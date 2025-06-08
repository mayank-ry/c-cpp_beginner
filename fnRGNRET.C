#include <stdio.h>
void sum(int x, int y)
{
    int sum = x + y;
    printf("\n sum is : %d", sum);
}
int main()
{
    sum(123, 543);
    return 0;
}