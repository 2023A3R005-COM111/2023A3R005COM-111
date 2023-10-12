#include<stdio.h>
enum day {monday,tuesday,wednesday,thursday,friday,saturday,sunday};
int main()
{
    enum day week_st,week_end;
    printf("enter the start of week(0=monday,1=tuesday,2=wednesday,3=thursday,4=friday,5=saturday,6=sunday): ");
    scanf("%s",&week_st);
    printf("enter the end of the week (0=monday,1=tuesday,2=wednesday,3=thursday,4=friday,5=saturday,6=sunday): ");
    scanf("%s",&week_end);
    if (week_st==tuesday)
    {
        week_end=saturday;
    }
    else if(week_st==monday)
    {
        week_end=friday;
    }
    else
    printf("enter valid week start date\n");
    printf("user has entered following choices: \n");
    printf("start of the week: %s\n",week_st);
    printf("end of the week: %s\n",week_end);
    return 0;
}