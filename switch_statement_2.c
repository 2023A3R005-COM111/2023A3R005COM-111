#include<stdio.h>
int main()
{
    int marks,index;
      char grade;
        printf("enter the number obtained by the student: ");
            scanf("%d",&marks);
                index=marks/10;
                    switch (index)
                    {
                        case 10:
                            case 9:
                                case 8:
                                    grade = 'h';
                                    break;
                                        case 7:
                                            case 6:
                                            grade = '1';
                                        break;
                                    case 5:
                                grade='2';
                            break;
                        case 4:
                    grade = '3';
                break;
            default:
        grade = 'f';
    break;
    }
    printf("the grade obtained by the student is: %c\n", grade);
    return 0;
}