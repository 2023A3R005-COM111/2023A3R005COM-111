#include<stdio.h>
int main()
{
    float Average_marks;
    //finding out the grade of the student

    printf("Enter the average marks of the student: ");
    scanf("%f",&Average_marks);

        if (Average_marks >= 80 && Average_marks <=100)
           {
             printf("The grade of student is honours");
           }

               else if (Average_marks >= 60 && Average_marks <=79)
                  {
                    printf("The grade of student is 1st division");
                  }

                     else if (Average_marks >= 50 && Average_marks <=59)
                        {
                          printf("The grade of student is 2nd division");
                        }

                    else if (Average_marks >= 40 && Average_marks <=49)
                        {
                           printf("The grade of student is 3rd division");
                        }

               else if (Average_marks >= 0 && Average_marks <=39)
                  {
                     printf("The student if fail in the exam");
                  }

        else
           {
              printf("enter a valid value, the value should be between 0 to 100");
           }
                   
    return 0;                      
}