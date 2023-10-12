#include<stdio.h>
int main()
{
    //finding the ratio of the number using if else statement
    int a,b,c,d;
    float result;
        printf("finding the ratio of (a+b)/(c-d): ");
            scanf("%d %d %d %d",&a,&b,&c,&d);


        if (c-d!= 0)
            { result=((float)(a+b)/(float)(c-d));
              printf("%d",&result);
            }
        else
            {
              printf("(c-d) cannot be zero");
            } 
               
    return 0;
}