#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two integer: ");
    scanf("%d %d",&a, &b);
            //Bitwise AND
                printf("Result of bitwise operator and is %d\n",a & b);
                    //Bitwise Or
                        printf("Result of bitwise operator or is %d\n",a|b);
                            //Bitwise XOR
                                printf("Result of bitwise operator XOR is %d\n", a ^ b);
                                //Bitwise not compliment
                            printf("Result of bitwise operator not is %d\n",~a);
                        //Bitwise not compliment
                    printf("Result of bitwise operator not is %d\n",~b);
                //Bitwise left shift
            printf("Result of bitwise operator left shift is %d\n",a<<1);
        //Bitwise right shift
    printf("Result of bitwise operator right shift is %d\n",b>>1);

    return 0;
}