#include<stdio.h>
#include<stdio.h>
#include<math.h>

int main()
{
   int num;
   printf("Enter the integer value:");
   scanf("%d",&num);
  
   if(num<0)
      printf("Absolute value=|%d|\n",-1*num);
   else
      printf("Absolute value=|%d|\n",num);
   return 0;
}
