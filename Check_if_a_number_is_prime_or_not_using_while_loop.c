#include <stdio.h>
#include <math.h>
int main()
{
    int n, i = 2, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // loop until i is less than or equal to square root of n
    while (i <= sqrt(n))
    {
        // check if n is divisible by i
        if (n % i == 0)
        {
            // n is not prime
            flag = 1;
            break;
        }
        // increment i by 1
        i++;
    }

    // check the value of flag
    if (n == 1)
    {
        printf("1 is neither prime nor composite.\n");
    }
    else
    {
        if (flag == 0)
            printf("%d is a prime number.\n", n);
        else
            printf("%d is not a prime number.\n", n);
    }

    return 0;
}
