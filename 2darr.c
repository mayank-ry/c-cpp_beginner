#include <stdio.h>
int main()
{
    int a[3][3] = {{14, 45, 47}, {41, 55, 46}, {7, 45, 6}};
    int i, j;
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}