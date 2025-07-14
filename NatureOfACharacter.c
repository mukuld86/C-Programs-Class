#include<stdio.h>
main()
{
    printf("Enter a character: ");
    char c;
    scanf("%c",&c);
    if (c>='A' && c<='Z')
        printf("Is a uppercase alphabet");
    else if (c>='a' && c<='z')
        printf("Is a lowercase alphabet");
    else if (c>='0' && c<='9')
        printf("Is a digit");
    else
        printf("Is a special character");
}
