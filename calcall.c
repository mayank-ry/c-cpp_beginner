#include<stdio.h>
int main(){
    char ch;
    int a,b,total;
    printf("Enter character To Perform Operation (+,-,*,/,%) : ");
    scanf("%c", &ch);
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    switch(ch){
        case '+':
        total=a+b;
        printf("Total Is : %d", total);
        break;
        case '-':
        total=a-b;
        printf("Total Is : %d", total);
        break;
        case '*':
        total=a*b;
        printf("Total Is : %d", total);
        break;
        case '/':
        total=a/b;
        printf("Total is : %d", total);
        break;
        case '%':
        total=a%b;
        printf("Total is : %d", total);
        break;
        default:
        printf("Please Enter A Valid Character______");

    }
    return 0;

}