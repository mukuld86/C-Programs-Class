#include<stdio.h>
#include<conio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if (x%5==0)
    {
     printf("Number is Divisible by 5");
    }
    else
    {
        printf("Number is not Divisible by 5");
    }
}
