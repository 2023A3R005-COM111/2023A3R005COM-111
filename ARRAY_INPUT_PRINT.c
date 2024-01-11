#include<stdio.h>
int main()
{
    int array[5],i;
    for(i=0;i<5;i++)
    {
        printf("Enter a[%d]: ",i);
        scanf("%d",&array[i]);
    }
    printf("\nPrinting elements of the array: \n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}