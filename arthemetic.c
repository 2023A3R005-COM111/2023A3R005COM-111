#include<stdio.h>
int main()
{
    //arthemetic operations
    int radius,length,breadth,side,perimeter,area,circumference;

    //circle
    printf("enter radius: ");
    scanf("%d",&radius);

    //square
    printf("enter side: ");
    scanf("%d",&side);

    //rectangle
    printf("enter length: ");
    scanf("%d",&length);

    printf("enter breadth: ");
    scanf("%d",&breadth);

    //area of circle
    area=3.14*radius*radius;
    printf("area of circle: %d\n",area);

    //circumference of circle
    circumference=3.14*2*radius;
    printf("circumference of circle: %d\n",circumference);

    //area of square
    area=side*side;
    printf("area of square: %d\n",area);

    //permiter of square
    perimeter=4*side;
    printf("perimeter of square: %d\n",perimeter);

    //area of rectangle
    area=length*breadth;
    printf("area of rectangle: %d\n",area);
    
    //perimeter of rectangle
    perimeter=2*(length+breadth);
    printf("perimeter of rectangle: %d\n",perimeter);


    return 0;
}