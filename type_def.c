#include<stdio.h>
typedef int units;
typedef float marks;
int main()
{
    //using type def to define int as units and float as marks
    units batch1,batch2;
    marks student1_marks,student2_marks;

        printf("enter the number of units for batch1: ");
            scanf("%d",&batch1);
                printf("enter the number of units for batch 2: ");
                    scanf("%d",&batch2);
                        printf("enter the marks of student1: ");
                            scanf("%f",&student1_marks);
                        printf("enter the marks for student 2: ");
                    scanf("%f",&student2_marks);
                printf("number of units for batch1: %d\n",batch1);
            printf("number of units for batch2: %d\n",batch2);
        printf("marks for student 1: %f\n",student1_marks);
    printf("marks for student 2: %f\n",student2_marks);
    
    return 0;
}