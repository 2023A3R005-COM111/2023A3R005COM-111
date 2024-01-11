#include<stdio.h>
#define rows 5
#define columns 5
int main()
{
    int row,column,product[rows][columns];
    int i,j;
    printf("MULTIPLICATION TABLE\n\n");
    printf("  ");
    for (j=1;j<=columns;j++)
    
        printf("%2d\t",j);
        printf("\n");
        printf("_____________________________________\n");
    
        for(i=0;i<rows;i++)
        {
            row =i+1;
            printf("%d |",row);
            for(j=1;j<=columns;j++)
            {
                column =j;
                product[i][j]=row*column;
                printf("%d\t",product[i][j]);
            }
            printf("\n");
        }
    
    return 0;
}