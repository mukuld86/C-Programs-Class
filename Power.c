#include<stdio.h>
#include<math.h>
int main()
{
    int x,n,res=1;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Enter the power: ");
    scanf("%d",&n);
   // res=pow(x,n);
    int i=1;
    while (i<=n)
    {
        res=res*x;
        i++;
    }
    printf("Result is %d",res);
    return 0;
}
