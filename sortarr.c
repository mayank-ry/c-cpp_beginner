#include <stdio.h>
int main()
{
    int a[10] = {45, 41, 24, 74, 94, 65, 74, 84, 51, 35};
    int i, sort = 0;
    for (i = 0; i <= 9; i++)
    {
        if (a[i] < a[i + sort])
        {
            printf("[%d]", a[i]);
        }
        else
        {
            i++;
        }
    }
    return 0;
}