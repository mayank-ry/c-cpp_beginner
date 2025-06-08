#include <stdio.h>
int main()
{
    int a[10] = {10, 45, 44, 65, 10, 44, 48, 74, 95, 65};
    int i, j;
    printf("duplicate elements in array are :");
    for (i = 0; i <= 9; i++)
    {
        for (j = i + 1; j <= 9; j++)
        {
            if (a[i] == a[j])
            {
                printf(" %d ", a[i]);
            }
        }
    }
    return 0;
}