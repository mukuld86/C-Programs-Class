#include<stdio.h>
main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    while (n>0)
    {
        printf("%d ",2*n-1);
        n--;
    }
}
