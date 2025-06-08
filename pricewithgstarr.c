#include <stdio.h>
int main()
{
    int a[10];
    int i, n;
    printf("enter numbers : \n");
    for (i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i <= 9; i++)
    {
        if (a[i] % 2 == 0)

        {
            printf("number is even : %d\n", a[i]);
        }
    }

    return 0;
}