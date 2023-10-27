#include<stdio.h>
int main()
{
    int a=1, b=1,limit,i;
    printf("enter the value of the limit: ");
    scanf("%d", &limit);
    for (i=0; i<limit; i++)
    {
        printf("%d\n",a);
        printf("%d\n",b);
        a=a+b;
        b=a+b;
    }
    return 0;
}