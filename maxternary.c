#include<stdio.h>
int main(){
    int a,b;
    printf("enter a : ");
    scanf("%d",&a);
    printf("enter b : ");
    scanf("%d",&b);
    a>b ?
    printf(" a is greater : %d ",a) :
    printf("b is greater : %d ",b);
    return 0;
}