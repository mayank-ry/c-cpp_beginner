#include<stdio.h>
int main(){
    int fact=1,i=1,n;
    printf("enter n : ");
    scanf("%d", &n);
    while(i<=n){
        fact=fact*i;
        i++;
        

    }
    printf("factorial is : %d", fact);
    return 0;
    
}