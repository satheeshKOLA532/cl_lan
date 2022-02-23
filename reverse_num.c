#include<stdio.h>

int main()
{
  int num;
  int units,tens,hundreds;

  printf("Enter the three digit number=");
  scanf("%d",&num);
 
  units=num%10;
  tens=(num/10)%10;
  hundreds=num/100;


  printf("The Reversed number is %d%d%d\n",units,tens,hundreds);
  return 0;
}
