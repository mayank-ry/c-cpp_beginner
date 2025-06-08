#include<stdio.h>
int main(){
    int a,b,max;
    printf("enter a , b");
    scanf("%d%d",&a,&b);
    max=a>b ? a:b;
    printf("max is : %d ",max);
    return 0;
}