#include <stdio.h>

int main() {
    int a, b, result;
    char ch;

    printf("Enter a: ");
    scanf("%d", &a);
    
    printf("Enter b: ");
    scanf("%d", &b);

    printf("Choose a valid operator (+, -, *, /): ");
    scanf(" %c", &ch);  // Added a space before %c to consume any leftover newline

    switch (ch) {
        case '+': 
            result = a + b;
            printf("Result is: %d\n", result);
            break;
        case '-': 
            result = a - b;
            printf("Result is: %d\n", result);
            break;
        case '*': 
            result = a * b;
            printf("Result is: %d\n", result);
            break;
        case '/': 
            if (b == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = a / b;
                printf("Result is: %d\n", result);
            }
            break;
        default:
            printf("Error: Enter a valid operator.\n");
    }

    return 0;
}
