#include<stdio.h>
float add(float a,float b);
float sub(float a,float b);
float multiply(float a,float b);
float div(float a,float b);
int main()
{
    float num1,num2,result;
    printf("enter the value of num1: ");
    scanf("%f",&num1);
    printf("enter the value of num2: ");
    scanf("%f",&num2);
     
     result= add(num1,num2);
    printf("addition of num1 and num2 is: %f\n",result);
    result= sub(num1,num2);
    printf("subtraction: %f\n",result);
    result= multiply(num1,num2);
    printf("multiplication: %f\n",result);
    result = div(num1,num2);
    printf("division: %f\n",result);
    return 0;
}
float add(float a,float b)
{
    return a+b;
}
float sub(float a,float b)
{
    return a-b;
}
float multiply(float a,float b)
{
    return a*b;
}
float div(float a,float b)
{
    return a/b;
}


  