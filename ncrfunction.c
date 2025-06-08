#include <stdio.h>
int factorial(int n)
{
    int fact = 1, i;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
        printf("fact is %d : ", fact);
    }
    return fact;
}
int main()
{
    printf("enter n : ");
    scanf("%d", &n);

    fact();
    return 0;
}