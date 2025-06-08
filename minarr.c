#include <stdio.h>
int main()
{
    int a[10] = {10, 55, 41, 65, 63, 24, 51, 65, 84, 47};
    int i, min;
    min = a[0];
    for (i = 0; i <= 9; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("minimum is %d", min);
    return 0;
}
