#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  float x1,x2,y1,y2;
  float distance;
  
  printf("Enter x1 value=");
  scanf("%f",&x1);
  printf("Enter x2 value=");
  scanf("%f",&x2);
  printf("Enter y1 value=");
  scanf("%f",&y1);
  printf("Enter y2 value=");
  scanf("%f",&y2);

  distance=sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
  
  printf("The distance between 2 points is %.2f\n",distance);
  return 0;
}
