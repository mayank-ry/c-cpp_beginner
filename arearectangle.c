#include <stdio.h>
int main()
{
    float length, breadth, area;
    printf("enter breadth \n enter length \n: ");
    scanf("%f%f", &breadth,&length);
    area = length * breadth;
    printf("area is : %f", area);
    return 0;
}