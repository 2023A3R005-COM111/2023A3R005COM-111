#include<stdio.h>
int main()
{
    int a,b=a,sum=0,remainder;
    printf("enter the number: ");
    scanf("%d",&a);
    while(a>0)
    {
        remainder=a%10;
        sum=sum+(remainder*remainder*remainder);
        a=a/10;
    }
    if (b==sum)
    {
        printf("the number is armstrong");
    }
    else
    {
        printf("the number is not armstrong");
    }

    return 0;
}