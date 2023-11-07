#include<stdio.h>
int main()
{
    int i,sum=0,remainder;
    printf("enter the number: ");
    scanf("%d",&i);
    if (i<0)
    {
        printf("enter a positive number");
    }
    else
    {
    while (i>0)
    {
        /* code */
        remainder=i%10;
        sum=sum+remainder;
        i=i/10;
    }
    printf("Sum of digit: %d",sum);
    }
    return 0;
    
}