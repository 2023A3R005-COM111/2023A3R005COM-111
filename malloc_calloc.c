#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr_malloc,*arr_calloc;
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    arr_malloc=(int *)malloc(size * sizeof(int));
    if (arr_malloc == NULL)
    {
        printf("Mmemory allocation failed using malloc(). Exiting program.\n");
        return 1;
    }
    printf("Enter %d integers for the array (malloc):\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr_malloc[i]);
    }
    arr_calloc=(int *)calloc(size, sizeof(int));
    if(arr_calloc==NULL)
    {
        printf("Memory allocation failed using calloc(). Exiting program.\n");
        free(arr_malloc);
        return 1;
    }
    printf("Enter %d integers for the array (clloc):\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr_calloc[i]);
    }
    printf("Array elements (malloc): ");
    for (i=0;i<size;i++)
    {
        printf("%d",arr_malloc[i]);
    }
    printf("\n");
    printf("Array elements (calloc): ");
    for (i=0;i<size;i++)
    {
        printf("%d",arr_calloc[i]);
    }
    printf("\n");
    free(arr_malloc);
    free(arr_calloc);
    return 0;
}