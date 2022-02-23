#include<stdio.h>
#include<stdio.h>

int main()
{
  int num1,num2;
  printf("Enter two numbers:");
  scanf("%d",&num1);
  scanf("%d",&num2);

  if (num1>num2)
       printf("%d is the maximum number.\n",num1);
  else
       printf("%d is the maximum number.\n",num2);
  return 0;
}
