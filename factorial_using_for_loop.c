#include<stdio.h>
int main()
{
    int a,count,factorial=1;
    printf("enter the number of which factorial is to be calculated: ");
    scanf("%d",&a);
    for (count=1;count<=a;count++)
    {
        factorial *= count;
    }
     printf("the factorial of a: %d",factorial);
    return 0;
}