#include<stdio.h>
int main()
{
    //checking the maximum value of 16 bit compiler
        printf("integer values\n\n");
            printf("%d %d %d\n",32767,32767+1,2147483647);
                printf("\n");
            printf("long integer values\n\n");
        printf("%ld %ld %ld\n",32767L,32767+1L,32767L+10L);
    return 0;
}