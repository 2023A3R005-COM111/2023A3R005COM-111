#include<stdio.h>
#include<ctype.h>
int main()
{
    char input;
    printf("Enter the value of the input: ");
    input= getchar();
    if (isalpha(input)>0)
    {
        printf("The value you entered is alphabet");
    }
    else if (isdigit(input)>0)
    {
        printf("The value you entered is a digit");
    }
    else
    {
       printf("The value you entered is a special character or other");
    }
    return 0;
}