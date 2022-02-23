#include<stdio.h>
#include<stdlib.h>

int main()
{
   int a,b,c;
   printf("enter three integers a,b,c=");
   scanf("%d,%d,%d",&a,&b,&c);
  if(a==0||b==0|c==0)
      printf("Can't Divide with zero!! check your integer values!\n");
  else if((a%b==0||b%a==0)&&(b%c==0||c%b==0)&&(c%a==0||a%c==0))
      printf("Divisible\n");
  else
     printf("Non-Divisible\n");
  return 0;
}
