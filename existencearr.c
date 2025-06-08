#include <stdio.h>
int main()
{
    int a[10] = {10, 45, 47, 48, 41, 14, 65, 48, 74, 65};
    int i, key, flag, pos;
    printf("enter value to find : ");
    scanf("%d", &key);
    for (i = 0; i <= 9; i++)
    {
        if (a[i] == key)
        {
            flag = 1;
            pos = i;
        }
    }
    if (flag == 1)
    {
        printf("key is found %d at %d ", key, pos + 1);
    }
    else
    {
        printf("key not founded %d", key);
    }

    return 0;
}