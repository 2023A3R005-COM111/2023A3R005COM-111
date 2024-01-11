#include<stdio.h>
#define maxvel 20
#define counter 11
int main()
{
  float value[maxvel];
  int i,low,high;
  int group[counter]={0,0,0,0,0,0,0,0,0,0,0};
  for (i=0;i<maxvel;i++)
  {
    printf("Enter marks for student [%d]: ",i+1);
    scanf("%f",&value[i]);
    ++group[ (int) (value[i]) / 10];
  }
  printf("\nGROUP    RANGE    FREQUENCY\n\n");
  for(i=0;i<counter;i++)
  {
    low=i*10;
    if(i==10)
    {high=100;}
    else
    {
     high=low+9;
     printf("%d %d to %d %d\n",i+1,low,high,group[i]);
    }
  }
  return 0;
}