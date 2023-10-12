#include<stdio.h>
int main()
{
    int x;
      float weeklysalary;
        printf("enter the number of product sold in a week: ");
        scanf("%d",&x);
      weeklysalary= (x<40)?(4*x+100):((x==40)?300:(4.5*x+150));
    printf("weekly salary: %f\n",weeklysalary);
return 0;
}