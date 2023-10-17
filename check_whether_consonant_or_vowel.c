#include<stdio.h>
int main()
{
    char alphabet;
    printf("enter the alphabet which you want to check if it is vowel or not: ");
                scanf("%c",&alphabet);

    if (alphabet=='a'||alphabet=='e'||alphabet=='i'||alphabet=='o'||alphabet=='u'||alphabet=='A'||alphabet=='E'||alphabet=='I'||alphabet=='O'||alphabet=='U')
             {
                printf("the alphabet you entered is vowel\n");
             }

    else if ((alphabet >= 'a' && alphabet<='z')|| (alphabet >= 'A' && alphabet<='Z'))
        {
        printf("the alphabet you entered is consonant");
        }

                else
                {
                    printf("enter a valid input");
                }

    return 0;
}