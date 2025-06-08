#include <stdio.h>
int main()
{
    char ch;
    int a, b, result;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    printf("enter any character (+,-,*,/) : ");
    scanf(" %c", &ch);
    switch (ch)
    {
    case '+':
        result = a + b;
        printf("sum is %d", result);
        break;
    case '-':
        result = a - b;
        printf("minus is %d", result);
        break;
    case '*':
        result = a * b;
        printf("multiply is %d :", result);
        break;
    case '/':
        result = a / b;
        printf("divide is %d ", result);
        break;
    }

    return 0;
}