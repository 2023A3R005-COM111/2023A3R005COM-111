#include<stdio.h>
int main()
{
    int i,n;
    float sum=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum += (float)1/i;   
    }
    printf("The value of sum is: %f\n",sum);
    
    return 0;
}