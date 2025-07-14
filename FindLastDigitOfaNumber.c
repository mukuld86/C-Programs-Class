#include<stdio.h>
#include<conio.h>

int main()
{
    printf("Enter a number: ");
    int a,b;
    scanf("%d",&a);
    b=a%10;
    printf("Last digit of %d is %d",a,b);
}
