#include<stdio.h>
void main()
{
    int a[5]={10,20,30,40,50};
    int k=2,i;
    int temp= a[0];
    for(i=0;i<4;i++)
    {
        a[i]=a[i+1];
        }
    a[4]=temp;
    printf("content of arrray after left rotation by 1 is :\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    } 
}