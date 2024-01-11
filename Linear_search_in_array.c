#include<stdio.h>
int linearsearch(int array[],int size,int key);
int main()
{
    int size,key;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    printf("Enter %d elements: \n",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter the elements to search: ");
    scanf("%d",&key);
    int result= linearsearch(array,size,key);
    if(result!= -1)
    {
        printf("Elements %d found at index %d.\n",key,result);
    }
    else
    {
        printf("Elements %d not found in the array.\n",key);
    }
    return 0;
}
int linearsearch(int array[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(array[i]==key)
        {
            return i;
        }
    }
    return -1;
}