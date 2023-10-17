#include<stdio.h>
int main()
{
    int i=1;
    int sum=0;
    do
    {
        sum=sum+i;
        i=i+2;
    }
    while (sum<40 || i<10);
    printf("%d %d\n",i,sum);
    return 0;
}
