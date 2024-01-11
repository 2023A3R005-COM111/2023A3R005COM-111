#include<stdio.h>
struct personal
{
    /* data */
    char name[50];
    char dateofjoining[20];
    float salary;
};
int main()
{
    struct personal person;
    printf("Enter person's name: ");
    scanf("%s",&person.name);
    printf("Enter date of joining: ");
    scanf("%s",&person.dateofjoining);
    printf("Enter salary: ");
    scanf("%f",&person.salary);
    printf("\nPerson Informationn: \n");
    printf("Name: %s\n",person.name);
    printf("Date of joining: %s\n",person.dateofjoining);
    printf("Salary: %f\n",person.salary);
    return 0;
    
}
