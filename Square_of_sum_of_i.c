#include<stdio.h>
int main()
{
    int array[11],i,s=0;
    for (i=1;i<11;i++)
    {
        /* code */
        printf("Enter a[%d]: ",i);
        scanf("%d",&array[i]);
    }
    for(i=1;i<11;i++)
    {
        s += array[i]*array[i];
    }
    printf("\nSum of square of elements = %d",s);
    return 0;
}