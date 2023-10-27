#include<stdio.h>
int main()
{
    int a,sum=0,remainder;
    printf("enter the first number  of three number: ");
    scanf("%d",&a);
    while(a>0)
    {
        remainder=a%10;
        sum=sum+remainder;
        a=a/10;
    }
    printf("sum of the number is: %d\n",sum);
    return 0;
}