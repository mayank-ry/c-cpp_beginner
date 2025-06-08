#include <stdio.h>
int main()
{
    float a;
    printf("enter any number : ");
    scanf("%f", &a);
    if (a > 0)
    {
        printf("number is positive : + ");
    }
    else if (a < 0)
        {
            printf("number is negative : - ");
        }
    else
    {
        printf("number is neutral");
    }
    return 0;
}