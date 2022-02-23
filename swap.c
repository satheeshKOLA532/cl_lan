#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a=100;
  int b=200;
  int temp;
  
  printf("a=%d\n",a);
  printf("b=%d\n",b);
 
  temp=a;
  a=b;
  b=temp;
  
  printf("a=%d\n",a);
  printf("b=%d\n",b);
  return 0;
}
