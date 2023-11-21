#include<stdio.h>
void printline(void);
int main()
{
    printline();
    printf("Welcome to miet ece department\n");
    printline();
    return 0;
}
void printline(void)
{
    int i;
    for (i=1;i<40;i++)
    {
        printf("-");
    }
    printf("\n");
}