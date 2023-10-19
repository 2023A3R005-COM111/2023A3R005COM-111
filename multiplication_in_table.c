#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a: ");
    scanf("%d",&a);
    int count=1;
    do
    {
      b=count * a;
      printf("%d x %d = %d\n",a, count, b );
      count++;
    }
    while (a<=10);

    return 0;
     
}