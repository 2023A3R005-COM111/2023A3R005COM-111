#include<stdio.h>
struct student{
    char name[50];
    float marks;
};
int main()
{
    FILE *file;
    struct student student;
    int numstudents,i;
    file=fopen("student_data.txt","w");
    if(file==NULL)
    {
        printf("Error opening the file for writing.\n");
        return 1;
    }
    printf("Enter the number of student: ");
    scanf("%d",&numstudents);
    for(i=0;i<numstudents;i++)
    {
        printf("Enter name of student %d: ",i+1);
        scanf("%s",student.name);
        printf("Enter marks of student %d: ",i+1);
        scanf("%f",&student.marks);
        fprintf(file, "%s %.2f\n",student.name,student.marks);
    }
    fclose(file);
    file= fopen("student_data.txt","r");
    if(file==NULL)
    {
        printf("Error");
        return 1;
    }
    printf("\nstudent data:\n");
    while(fscanf(file,"%s %f",student.name,&student.marks)!=EOF)
    {
        printf("Name: %s,Marks: %.2f\n",student.name,student.marks);
    }
    fclose(file);
    return 0;

    
}