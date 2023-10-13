#include<stdio.h>
int main()
{
    int sum=0;
    int n=1;
    {
        while(n<=10)
        {
            sum=sum+n*n;
            n=n+1;
        }
    }
    printf("the sum of square of integer between 1 to 10: %d\n",sum);
    return 0;
}