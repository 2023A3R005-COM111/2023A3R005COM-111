#include<stdio.h>
int main()
{
    char singlequote = '\''; //single qoute character
    
    printf("single quote: %c\n",singlequote);
    
    char doublequote = '\"';//double qoute character
    
    printf("double quote: %c\n",doublequote);
    
    char backslash = '\\';//backslashqoute character
    
    printf("backslash: %c\n",backslash);
    
    printf("hello\nworld\n");// slash n qoute character
    
    printf("tabbed\t\t\ttext\n"); //slash t qoute character
    
    printf("back\bspace\n"); //backspace qoute character

    printf("carriage\rreturn\n");//carriage return 

    printf("form\ffeed\n");

    printf("vertical\vtab\vcharacter\vdisplay\n");

    char nullchar = '\0';

    printf("null character: %c\n",nullchar);

    printf("beep\a\n");

    char questionmark = '\?';

    printf("question mark: %c\n",questionmark);

    char hexvalue = '\x86';

    printf("hex value: %c\n",hexvalue);

    return 0;
}