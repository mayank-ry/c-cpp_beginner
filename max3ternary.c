#include<stdio.h>
int main(){
    int a,b,c,max;
    printf("enter numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    max=(a>b) ? ((a>c) ? a:c) : ((b>c) ? b:c);
    printf("max %d",max);
    return 0;
}














