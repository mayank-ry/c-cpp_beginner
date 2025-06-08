#include<stdio.h>
int main(){
    int a,number;
    printf("enter any number : ");
    scanf("%d",&a);
    number=(a%5==0 && a%11==0) ? printf("number is divisible by 5 and 11 : ",number):printf("not divisible : ",number);
    return 0;

}