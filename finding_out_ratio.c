#include<stdio.h>
int main()
{
    int a,b,c,d;
        float result;
            printf("enter the value of a: ");
                scanf("%d",&a);
                    printf("enter the value of b: ");
                    scanf("%d",&b);
                 printf("enter the value of c: ");
            scanf("%d",&c);
         printf("enter the value of d: ");
    scanf("%d",&d);


    if (c-d>= 0)
        { result=((float)(a+b)/(float)(c-d));
         printf("%f",result);
        }


    else
    {
        printf("(c-d) cannot be zero");
    } 
    
       
    return 0;
}