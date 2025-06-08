#include<stdio.h>
int main(){
    char a,e,i,o,u,A,E,I,O,U,ch;
    printf("enter any character (a-z,A-Z) : ");
    scanf("%c",&ch);
    if(ch==a || ch==A || ch==e || ch==E || ch==i || ch==I || ch==o || ch==O || ch==u || ch==U ){
        printf("Character is vowel %c :");
    }
    else{
        printf("Character is consonant %c :");
    }
    return 0;
}