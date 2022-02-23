#include<stdio.h>
#include<stdlib.h>

int main()
{  
   float num1,num2;
   printf("Enter the two floating numbers:");
   scanf("%f",&num1);
   scanf("%f",&num2);
  
   if(num1>num2)
   {   printf("%.1f is maximum number\n",num1);
      printf("%.1f is the minimum number\n",num2);

   }

   else 
   {    printf("%.1f is maximum number\n",num2);
       printf("%.1f is the minimum number\n",num1);
   }
   return 0;
}
