#include<stdio.h>
int main()
{
    int marks;
    char grade;
    printf("Enter marks: ");
    scanf("%d",&marks);
    if (marks>=80)
        grade='A';
    else if (marks>=60 && marks<80)
        grade='B';
    else if (marks>=40 && marks<60)
        grade='C';
    else
        grade='F';
    if (grade!='F')
        printf("Your grade is %c",grade);
    else
        printf("You have failed!");
}
