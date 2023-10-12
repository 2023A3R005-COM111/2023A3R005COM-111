#include<stdio.h>
#include<math.h>
int main()
{
    float x,y;
 read:
        printf("enter a non negative number(or a negative number to exit): ");
          scanf("%f",&x);
             if (x<0)
               goto end;
            y=sqrt(x);
        printf("%f %f\n",x,y);
    goto read;
 end:
    printf("exiting the program\n");
      return 0;
}