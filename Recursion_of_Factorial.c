#include<stdio.h>
int factorial(int n);
int main()
{
    int num;
    printf("Enter a non negative integer: ");
    scanf("%d",&num);
    if (num<0)
    {
        printf("Enter a non negative number.\n");
    }
    else
    {
        printf("Factorial of %d is: %d\n",num,factorial(num));
    }
    return 0;
}
int factorial(int n)
{
    int fact;
    if (n==1||n==0)
    {
        return 1;
    }
    else
    {
     fact=n*factorial(n-1);
    }
    return fact;
}