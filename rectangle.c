#include<stdio.h>

int main()
{
  double height,width;
  double area;
  printf("Enter the height=");
  scanf("%lf", &height);
  printf("Enter the width=");
  scanf("%lf", &width);
  area= height * width;
  printf("Area of rectangle=%.2f\n",area);
  return 0;
}
