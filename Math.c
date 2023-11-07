#include<stdio.h>
#include<math.h>
int main()
{
    float x=2.0,y=3.0;
    printf("Square root of %.2f: %f.2\n",x,sqrt(x));
    printf("Exponential function,e^%.2f: %.2f\n",x,exp(x));
    printf("Natural logarithm of %.2f: %.2f\n",x,log(x));
    printf("Common logarithm (base 10) of %.2f: %f.2\n",x,log10(x));
    printf("Ceil of %.2f: %.2f\n",x,ceil(x));
    printf("Floor of %.2f: %.2f\n",x,floor(x));
    printf("Round of %.2f: %.2f\n",x,round(x));
    printf("Sine of %.2f radian: %.2f\n",x,sin(x));
    printf("Cosine of %.2f radian: %.2f\n",x,cos(x));
    printf("Tangent of %.2f radian: %.2f\n",x,tan(x));
    printf("Arcsine of %.2f radian: %.2f\n",x,asin(x));
    printf("Arcosine of %.2f radian: %.2f\n",x,acos(x));
    printf("Arctangent of %.2f radian: %.2f\n",x,atan(x));
    printf("Arctangent of %.2f radian: %.2f\n",x,atan2(x,y));
    printf("%.2f raised to the power of %.2f\n",x,y,pow(x,y));
    printf("Absoulute value of %.2f: %.2f\n",-x,fabs(-x));
    printf("Hyperbola sine of %.2f: %.2f\n",sinh(x));
    printf("hyperbola cosine of %.2f: %.2f\n",x,cosh(x));
    printf("Hyperbolic tangent of %.2f: %.2f\n",x,tanh(x));
    return 0;

    
}