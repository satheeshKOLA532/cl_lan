#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  int grade;
  int totalSum=0;
  int gradeCount=0;

  printf("Enter the grade value or -1 to stop:");
  scanf("%d",&grade);

  while(grade!=-1)
  {
    totalSum=totalSum+grade;
    gradeCount++;
    printf("Enter the grade value or -1 to stop:");
    scanf("%d",&grade);
  }
  
  printf("You have entered %d grades\n",gradeCount);
  if(gradeCount!=0)
     printf("AVERAGE OF THE GRADES IS %f\n",(float)totalSum/gradeCount);
  else
     printf("please enter atleast one Grade value\n");
  return 0;
}
