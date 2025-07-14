#include<stdio.h>
#include<math.h>
int main()
{
    int x,l;
    printf("Enter a number: ");
    scanf("%d",&x);
    for(int i=1;x>=pow(10,i);i++)
    {
        l=i+1;
    }

    int temp=x;
    int r,d=0,sum;
    while (x>0)
    {
        r=x%10;
        sum= sum+pow(r,l);
        x=x/10;
    }

    if(sum==temp)
        printf("%d is an Armstrong number",temp);
    else
        printf("%d is not an Armstrong number",temp);
}
