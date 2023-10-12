#include<stdio.h>
#define PI 3.142
int main()
{
    //defining value of pi 
    float radius,area,circumference;
        printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area=(PI)*radius*radius;
        printf("the area of circle is: %f\n",area);
    circumference= 2*(PI)*radius;

    printf("the circumference of circle is: %f\n",circumference);
    
    return 0;
}