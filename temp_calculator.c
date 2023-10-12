#include<stdio.h>
int main()
{
    int temp;

    //Temperature calculator
    printf("enter the value of temperature: ");
    scanf("%d",&temp);

    //when temperature is cold
    if(temp<30)
    {
        printf("temperature is cold");
    }

    //when temperature is hot
    else
    {
        printf("temperature is hot");
    }
    return 0;
}