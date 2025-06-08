#include<stdio.h>
int main(){
    float pi=3.14,area,radius;
    printf("enter radius : ");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("area is %f : ",area);
    return 0;
}