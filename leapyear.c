#include<stdio.h>
int main(){
    int year;
    printf("enter the year : ");
    scanf("%d",&year);
    year%400==0 ? printf("year is leap : %f ") : printf("year is not a leap year : %f");
    return 0;
}