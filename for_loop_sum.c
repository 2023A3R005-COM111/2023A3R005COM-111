#include<stdio.h>
int main()
{
    int sum=0,i;
    for (i=1;i<20 && sum<100;++i)
    {
        sum=sum+i;
        printf("%d %d\n",i,sum);
    }
    return 0;
}