#include<stdio.h>
int fibonacci(int n);
int main()
{
    int num,result;
    printf("Enter a positive integer for the term number: ");
    scanf("%d",&num);
    if (num<=0)
    {
        printf("The term cannot be negative or zero.\n");
    }
    else
    {
    result =fibonacci(num);
    }
    if (result == -1)
    {
        printf("Error: Invalid term number entered.\n");
    }
    else
    {
        printf("The %dth term in the fibonacci series is: %d\n",num,result);
    }
    return 0;
}
int fibonacci(int n)
{
    if (n<=0)
    {
    printf("\nError: Term number cannont be negative.\n");
    return -1;
    }
    else if(n==1 ||n==2)
    {
        return 1;
    }
    else
    {
        return (fibonacci(n-1)+fibonacci(n-2));
    }
}