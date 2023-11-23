#include<stdio.h>
double power(int x,int y);
int main()
{
    int x,y;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of y: ");
    scanf("%d",&y);
    printf("%d to the power %d is %f\n",x,y,power(x,y));
    return 0;
}
double power(int x,int y)
{
  double p=1.0;
  if (y>0)
  {
    while (y--)
    {
        p *=x;
    }
  }
  else
  {
    while (y++)
    {
        p /=x;
    }
  }
  return p;
}