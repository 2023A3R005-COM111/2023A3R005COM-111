#include<stdio.h>
int main()
{
    int count,n;
    float x,y;

    printf("enter the value of x: ");
    scanf("%f",&x);
    printf("enter the value of n: ");
    scanf("%d",&n);
    if (n<0)
    {
        printf("the value of  n should be a non negative integer\n");
        return 1;
    }
    y=1.0;
    count=1;
    while (count <=n)
    {
        y*=x;
        count++;
    }
    printf("\nx=%f; n= %d; x to the power of n= %f\n",x,n,y);
    return 0;
}