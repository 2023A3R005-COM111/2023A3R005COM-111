#include<stdio.h>
int main()
{
    int i=100;
    int* ptr;
    ptr = &i;
    printf("%d\n",i);
    printf("%d\n",ptr);
    printf("%d\n",&i);
    printf("%d\n",&ptr);
    printf("%d\n",*ptr);
    printf("%d\n",*(&i));
    return 0;
}