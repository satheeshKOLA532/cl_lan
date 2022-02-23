
#include<stdio.h>
#include<stdlib.h>

int main()
{
   long money,grade;
   printf("Enter money and grade:");
   scanf("%ld%ld",&money,&grade);
  
   if(money<50 && grade>90)
      printf("Give me money\n");
   if(money<50 || grade>90)
      printf("Give me money\n");
   if(!(grade<90))
      printf("good job!\n");
   return 0;
}
