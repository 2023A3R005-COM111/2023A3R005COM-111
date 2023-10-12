#include<stdio.h>
int main()
{
  //finding out the larger number by using if else statement
    int n;
    printf("enter the value of n: ");
    scanf("%d",&n);

    if(n%2 == 0)
   {
     printf("the given value is even");
   }
   else
   {
    printf("the given value is odd");
   }
   return 0;
}