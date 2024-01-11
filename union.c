#include<stdio.h>
union RollNumber
{
    int rollNumber;
};
union Marks 
{
    float marks;
};
union Grade
{
    char grade;
};
int main()
{
    union RollNumber roll;
    union Marks marks;
    union Grade grade;
    printf("Enter Roll no: ");
    scanf("%d",&roll.rollNumber);
    printf("Enter Marks: ");
    scanf("%f",&marks.marks);
    printf("Enter Grade: ");
    scanf(" %c",&grade.grade);
    printf("\nStudent Information:\n");
    printf("Roll Number: %d\n",roll.rollNumber);
    printf("Marks: %f\n",marks.marks);
    printf("Grade: %c\n",grade.grade);
    return 0;
}