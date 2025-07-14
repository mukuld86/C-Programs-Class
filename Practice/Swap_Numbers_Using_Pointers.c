#include<stdio.h>
void swap(int*, int*);

int main()
{
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    swap(&n1,&n2);
    printf("n1 = %d and n2 = %d",n1,n2);
}

void swap(int *p,int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
}
