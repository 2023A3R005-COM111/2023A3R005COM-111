#include<stdio.h>
int mul(int x,int y);
int main()
{
    int y;
    y=mul(10,5);
    printf("%d",y);
}
int mul(int x,int y)
{
    int p;
    p=x*y;
    return (p);
}
