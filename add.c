#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;

    //input from user for first digit
    printf("enter the first digit: ");
    scanf("%d",&a);

    //input from user for second digit
    printf("enter the second digit:  ");
    scanf("%d",&b);

    //addition
    c=a+b;
    printf("addition of two digit: %d\n",c);

    //subtraction
    d=a-b;
    printf("subtraction of two digit: %d\n",d);

    //multiplication
    e=a*b;
    printf("multiplication of two digit are: %d\n",e);

    //division
    f=a/b;
    printf("division of two digit are: %d\n",f);

    //remainder
    a%b==g;
    printf("remainder of two digit: %d\n",g);
    
    return 0;
}