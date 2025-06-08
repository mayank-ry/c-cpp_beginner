#include <stdio.h>
int main()
{
    int a;
    printf("enter any no. between 0-9 : ");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("No. Is : ONE ");
    }
    else if (a == 2)
    {
        printf("No. Is : TWO  ");
    }
    else if (a == 3)
    {
        printf("No. Is : THREE");
    }
    else if (a == 4)
    {
        printf("No. Is : FOUR ");
    }
    else if (a == 5)
    {
        printf("No. Is : FIVE ");
    }
    else if (a == 6)
    {
        printf("No. Is : SIX ");
    }
    else if (a == 7)
    {
        printf("No. Is : SEVEN ");
    }
    else if (a == 8)
    {
        printf("No. Is : EIGHT ");
    }
    else if (a == 9)
    {
        printf("No. Is : NINE ");
    }
    else if(a==0)
    {
        printf("No. Is : Zero ");
    }
    else{
        printf("enter a valid choice : ");
    }
  return 0;
}