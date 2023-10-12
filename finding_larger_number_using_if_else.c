#include<stdio.h>
int main()
{
    float a,b;
    //enter first value
    printf("enter the value of first digit: ");
    scanf("%f",&a);
    //enter second value
    printf("enter the value of second digit: ");
    scanf("%f",&b);

if(a>b)
{
    printf("the larger number is a");
}
else
{
    printf("the larger number is b");
}
return 0;
}