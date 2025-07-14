//Finding length of a string
#include<stdio.h>

int length(char *);

main()
{
    char name[20];
    printf("Enter your First name: ");
    scanf("%s",name);
    int l=length(&name);
    printf("Length of your name is : %d",l);
}

int length(char *p)
{
    int i;
    for(i=0;p[i];i++);
    return i;
}
