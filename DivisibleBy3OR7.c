#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if (a%3==0 && a%7==0)
    {
        printf("%d is divisible by 3 as well as by 7",a);
    }
    else if (a%3==0)
    {
        printf("%d is divisible by 3",a);
    }
    else if (a%7==0)
    {
        printf("%d is divisible by 7",a);
    }
    else
    {
        printf("%d is neither divisible by 3 nor 7",a);
    }
}
