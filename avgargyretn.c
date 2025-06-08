#include <stdio.h>
void average(int a, int b, int c, int d)
{
    float avg;
    avg = a + b + c + d / 4;
    printf("average is : %d ", avg);
}
void main()
{
    int a, b, c, d;
    printf("enter a,b,c,d : ");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    average(a, b, c, d);
}