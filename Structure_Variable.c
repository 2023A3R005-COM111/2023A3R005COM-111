#include<stdio.h>
struct class
{
    int number;
    char name[20];
    float marks;
};
int main()
{
    int x;
    struct class student1 = {111,"Rahul",98};
    struct class student2 ={222,"Harish",98};
    struct class student3;
    student3 =student2;
    x= ((student3.number==student2.number)&&
         (student3.marks == student2.marks))?:0;
         if(x==1)
         {
            printf("student2 and student3 are the same\n\n");
            printf("%d %s %.6f\n",student3.number,student3.name,student3.marks);
         }
         else
         {
            printf("Student 2 and student 3 are different\n\n");
         }
         return 0;
}