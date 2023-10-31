#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    if (n<=0){
        printf("invalid output number should be greater than zero\n");
        return 1;
    }
    int max,num;
    printf("enter number 1: ");
    scanf("%d",&max);
    for (int i = 2; i <=n; i++)
    {
       printf("enter number %d: ",i);
       scanf("%d",&num);
       if (num>max){
        max=num;
       }
    }
    printf("the maximum number is: %d\n",max);
    return 0;
}