#include<stdio.h>
#include<conio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
   /*
    if (a>0)
    {
        printf("Number is positive");
        exit(0);
    }
    if (a<=0)
    {
        printf("Number is non positive");
    }
 */
    if (a>0)
    {
        printf("Number is positive");
    }
    else
    {
        printf("Number is non positive");
    }

}
