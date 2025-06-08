#include <stdio.h>
int main()
{
    int a[10], i;
    int max;
    printf("enter elements of array : ");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d\n", &a[i]);
    }
    max = a[0];
    for (i = 1; i <= 9; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("number %d is greatest ", max);
    return 0;
}