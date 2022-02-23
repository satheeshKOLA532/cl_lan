#include<stdio.h>
#include<stdlib.h>

int main()
{
  int year;
  printf("Enter the year:");
  scanf("%d",&year);
  
  if(year%4==0)
     printf("\nit's a leap year bro\n\n");
  else if(year%100==0)
     printf("\nit's not a leap year broo\n\n");
  else if (year%400==0)
    printf("\nit's a leap year broo\n\n");
  else
    printf("\nit's not a leap year brooo\n\n");
  return 0;
}
