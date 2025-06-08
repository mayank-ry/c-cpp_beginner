#include<stdio.h>
int main(){
    int a,absolute;
    printf("enter a : ");
    scanf("%d",&a);
    absolute=a<0 ? a:a;
    printf("no. is %d",absolute);
    return 0;
}