#include<stdio.h>
int main()
{
    //using nesting for the program
    int num1,num2,num3;
        printf("enter the value of num1: ");
                scanf("%d",&num1);
                printf("enter the value of num2: ");
            scanf("%d",&num2);
        printf("enter the value of num3: ");
    scanf("%d",&num3);
    if(num1>=num2)
    {
        if (num1>=num3){
        printf("num1 is the largest number");
       }
       else
       {
        printf("num3 is the largest number");
       }
    }
    if else 
    {
        if (num2>=num3)
        {
            printf(" num2 is the largest number");
            }
            else
            {
                printf("num 3 is the largest number");
            }
    }       
    return 0;
        

}