#include <stdio.h>
int main()
{
    int i, j, n;
    printf("enter no. to print brooo...!! : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    printf("\nbye babesss...!! ");
}