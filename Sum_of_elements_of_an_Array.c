#include<stdio.h>
int main()
{
    int array[5],i,s=0;
    for (i=0;i<5;i++)
    {
        /* code */
        printf("Enter a[%d]: ",i);
        scanf("%d",&array[i]);
    }
    for(i=0;i<5;i++)
    {
        s += array[i];
    }
    printf("\nSum of elements = %d",s);
    return 0;
    
}