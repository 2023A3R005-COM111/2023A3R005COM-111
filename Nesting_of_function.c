#include<stdio.h>
float ratio(int x,int y, int z);
int difference(int x, int y);
int main()
{
    int a,b,c;
        printf("Enter the value of a: ");
            scanf("%d",&a);
                printf("Enter the value of b: ");
                scanf("%d",&b);
            printf("Enter the value of c: ");
        scanf("%d",&c);
    printf("The calculated ratio is: %f\n",ratio(a,b,c));
    
    return 0;
}
float ratio(int x,int y,int z)
{
    if (difference(y,z))
    {
        return (float)x/(y-z);
    }
    else
    {
      return 0;
    }
}
int difference(int p, int q)
{
    if (p!=q)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}