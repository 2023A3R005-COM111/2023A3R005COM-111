#include<stdio.h>
int main()
{
    int sum=0;
        int n=1;

    loop:

    sum=sum+n*n;
        if (n==10)
             goto print;
         else
        {
            n=n+1;
            goto loop;
        }

    print:
          printf("the sum of squares of integers from 1 to 10 is: %d\n",sum);
          
    return 0;
}