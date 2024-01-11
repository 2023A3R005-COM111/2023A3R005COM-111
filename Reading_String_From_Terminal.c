#include<stdio.h>
int main()
{
    char input[100];
    char ch;
    int i=0;
    printf("Enter a line of text: \n");
    while((ch=getchar()) != '\n'&& i<99)
    {
        input[i]=ch;
        i++;
    }
    input[i]='\0';
    printf("Entered text: %s\n",input);
    return 0;
}