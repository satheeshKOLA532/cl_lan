#include<stdio.h>

int main()
{
  int count=1;
  int num;
  printf("Enter a number to get number of asterisks:");
  scanf("%d",&num);

  while(count<=num)
  {
    printf("*\n");
    count++;
  }
  return 0;
}
