#include<stdio.h>

int main()
{
  int grade1;
  int grade2;
  int grade3;
  double average;
  
  printf("Grade1=");
  scanf("%d",&grade1);
  printf("Grade2=");
  scanf("%d", &grade2);
  printf("Grade3=");
  scanf("%d",&grade3);
  
  average=((double)grade1+(double)grade2+(double)grade3)/3;
  
  printf("average=%.2f\n",average);
  return 0;
}
