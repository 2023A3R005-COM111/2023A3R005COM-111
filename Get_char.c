#include<stdio.h>
int main()
{
    char answer;
    printf("would you like to know my name?\n");
    printf("Type Y FOR YES AND N for no: ");
    answer=getchar();
    if (answer == 'y'|| answer =='Y')
    {
        printf("\nMy name is Busy Bee\n");
        }
    else
    {
        printf("\nYou are good for nothing\n");
    }
    return 0;
}