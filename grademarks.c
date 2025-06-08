#include<stdio.h>
int main(){
    int marks,grade;
    char A,B,C,D,F;
    printf("Enter Marks Between 0-100 : ");
    scanf("&d",&marks);
    grade=(marks>=90)? 'A':
    (marks>=80)? 'B':
    (marks>=60)? 'C':
    (marks>=45)? 'D':'F';
    printf("Grade Is %c ",grade);
    return 0;

}