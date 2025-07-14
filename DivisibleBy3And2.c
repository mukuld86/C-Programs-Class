#include<stdio.h>
int main()
{
    printf("Enter a number: ");
    int a;
    scanf("%d",&a);
    if (a%3==0 && a%2==0)
    {
        printf("%d is divisible by 3 and 2",a);
    }
    else
    {
        printf("%d is not divisible by 3 and 2",a);
    }
}
