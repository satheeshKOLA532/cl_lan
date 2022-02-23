#include<stdio.h>
#include<stdlib.h>

int main()
{
  char grade;
  printf("Enter you grade(A-F):");
  scanf("%c",&grade);
  switch(grade)
  {
     case'A':
        printf("grade is between 90-100\n");
        break;
     case'B':
        printf("grade is between 80-89\n");
        break;
     case'C':
        printf("grade is between 70-79\n");
        break;
     case'D':
        printf("grade is between 60-69\n");
        break;
     default:
        printf("Error...Trt again...!\n");
        break;
  }
}
      
