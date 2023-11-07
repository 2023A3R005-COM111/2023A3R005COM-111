#include<stdio.h>
#include<math.h>
int main()
{
  int num,originalnum,remainder,n=0,result=0;
  printf("enter a number: ");
  scanf("%d",&num);
  
  originalnum=num;
  //Calculating the no. of digits
         while (originalnum!=0)
            {
                originalnum /=10;
                 ++n;
            }

  originalnum=num;
                    //Calculating if the number is armstrong or not
        while (originalnum!=0)
        {
            /* code */
            remainder=originalnum%10;
                result+=pow(remainder,n);
            originalnum/=10;
        }

    if (result==num)
        {
            printf("%d is an Armstrong number.\n",num);
         }

        else
        {
            printf("%d is not an Armstrong number.\n",num);
         }

  return 0;
  
}