#include<stdio.h>
main()
{
    int n,i=3;
    while (i>0)
    {
        printf("Enter an even number: ");
        scanf("%d",&n);
        if (n%2==0)
        {
            printf("You Won!");
            break;
        }
        else
        {
            printf("You need to enter an even number!\n");
            i--;
        }

    }
     if(i==0)
        {
            printf("You lose!");
        }
}
