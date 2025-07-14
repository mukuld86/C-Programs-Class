#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);

    printf("Before swapping a=%d, b=%d\n\n",a,b);

    c=b;
    b=a;
    a=c;
    printf("After swapping a = %d, b=%d\n",a,b);
}
