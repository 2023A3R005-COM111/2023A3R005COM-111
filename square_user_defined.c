#include<stdio.h>
float square(float x);
int main()
{
    float n,result;
    printf("Enter the number: ");
    scanf("%f",&n);
    result= square(n);
    printf("The square of %f is %f",n,result);
    return 0;
}
float square(float x)
{
    float y;
    y=x*x;
    return y;
}