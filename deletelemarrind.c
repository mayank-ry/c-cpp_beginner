#include <stdio.h>
int main()
{
    int a[10] = {10, 45, 65, 48, 47, 54, 41, 32, 65, 41};
    int key, i, j, temp;
    printf("enter index to delete element : ");
    scanf("%d", &key);
    printf("after deletion : ");
    for (i = 0; i <= 9; i++)
    {
        if (key != a[i])
        {
            printf(" %d ", a[i]);
        }
    }
    return 0;
}