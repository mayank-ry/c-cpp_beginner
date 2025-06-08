#include <stdio.h>
int main()
{
    int i, j;
    char ch = 'E';
    for (i = 5; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
        ch--;
    }
    printf("\nbye ");
}