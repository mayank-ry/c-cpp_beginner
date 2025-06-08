#include <stdio.h>
int main()
{
    int i, j, m, n;
    printf("enter n & m : ");
    scanf("%d%d", &n, &m);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\nbye");
}