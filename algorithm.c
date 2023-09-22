#include<stdio.h>
int main()
{
    //converting farenhite into celcius
    float F,C;
    printf("enter the value of f: ");
    scanf("%f",&F);
    C=5*(F-32)/9;
    printf("temperature in c: %f",C);
    return 0;
}