#include<stdio.h>
#include<math.h>
int main()
{
    float x,y;
      int count=1;
         printf("enter the five real values in a line: ");
           read:
             scanf("%f",&x);
               if (x<0)
                {
                   printf("value- %d is negative\n", count);
                }
                    else
               {
                    y= sqrt(x);
              printf("%f\t %f\n",x,y);
               }
            count=count+1;
         if (count<=5)
       {
       goto read;
       }
    printf("end of the computation\n");
return 0;
    
}