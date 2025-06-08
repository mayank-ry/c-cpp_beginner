#include<stdio.h>
int main(){
    int first=0,second=1,next;
    while(first<=200){
        printf("%d\n",first);
        next=first+second;
        first=second;
        second=next;
    }
    return 0;
}