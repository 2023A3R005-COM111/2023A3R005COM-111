#include<stdio.h>
int main()
{
    int a,b,c,choice;
      printf(" 1: addition\n");
        printf(" 2: subtraction\n");
          printf(" 3: multiplication\n");
            printf(" 4: division\n");
              printf(" enter your choice: ");
                scanf("%d",&choice);

                switch(choice)
    {
                case 1:
                  printf("enter number 1 ");
                    scanf("%d",&a);
                      printf("enter 2 number ");
                      scanf("%d",&b);
                    c=a+b;
                  printf("%d",c);
                break;
      
            case 2:
              printf("enter 1 number ");
                scanf("%d",&a);
                  printf("enter 2 number ");
                  scanf("%d",&b);
                c=a-b;
              printf("%d",c);
            break;
       case 3:
          printf("enter 1 number ");
            scanf("%d",&a);
              printf("enter 2 number ");
              scanf("%d",&b);
            c=a*b;
          printf("%d",c);
        break;
       case 4:
          printf("enter 1 number ");
             scanf("%d",&a);
              printf("enter 2 number ");
              scanf("%d",&b);
            c=a/b;
          printf("%d",c);
        break;
         default:
            printf("please enter valid choice");
          printf("press any key to continue");
    }
 return 0;
}