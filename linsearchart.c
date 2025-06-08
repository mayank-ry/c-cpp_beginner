#include <stdio.h>
int main()
{
    int a[10] = {10, 45, 74, 95, 48, 75, 65, 47, 48, 95};
    int i, flag, pos, key;
    printf("enter key to search : ");
    scanf("%d", &key);
    for (i = 0; i <= 9; i++)
    {
        if (key == a[i])
        {
            flag = 1;
            pos = i;
        }
    }
    if (flag == 1)
    {
        printf("key is found %d at %d", key, pos + 1);
    }
    else
    {
        printf("key %d not found ", key);
    }
    return 0;
}