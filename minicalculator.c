#include<stdio.h>
#include<stdlib.h>

int main()
{
   int num1,num2;
   char mathOperation;
   printf("Enter the math operation:");
   scanf("%c",&mathOperation);
  
   printf("Enter the first number:");
   scanf("%d",&num1);
   printf("Enter the second number:");
   scanf("%d",&num2);

   switch(mathOperation)
   {
      case'+':
        printf("%d,%c,%d=%d\n",num1,mathOperation,num2,num1+num2);
        break;
      case'-':
        printf("%d,%c,%d=%d\n",num1,mathOperation,num2,num1-num2);
        break;
      case'*':
        printf("%d,%c,%d=%d\n",num1,mathOperation,num2,num1*num2);
        break;
      case'/':
        if(num2==0)
           printf("You cannot divivde with 'zero!'\n");
        else
           printf("%d,%c,%d=%d\n",num1,mathOperation,num2,num1/num2);
        break;
      case'%':
        if(num2==0)
           printf("You cannot divide with 'zero!'\n");
        else
           printf("%d,%c,%d=%d\n",num1,mathOperation,num2,num1%num2);
        break;
      default:
       printf("Errorrr......Try again,.............\n");
       break;
   }
   return 0;
}
