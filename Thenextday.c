#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
   int day,month,year;
   printf("Enter the day,month,year values:");
   scanf("%d%d%d",&day,&month,&year);

   if(day<=29 && month==4,6,9,11)
      printf("The next day is:%d %d %d\n",day+(1),month,year);
   else if(day<=30 && month==1,3,5,7,8,10,12)
      printf("The next day is:%d %d %d\n",day+(1),month,year);
   else if(day==30 && month==4,6,9,11)
      printf("The next day is:%d %d %d\n",(day-29),month+(1),year);
   else if(day==31 && month==1,3,5,7,8,10)
      printf("The next day is:%d %d %d\n",(day-30),month+(1),year);
   else if(day==31 && month==12)
      printf("The next day is:%d %d %d\n",(day==1),month==1,year+(1));
   else if(day<=27 && month==2 && year%4!=0)
      printf("The next day is:%d %d %d\n",day+(1),month,year);
   else if(day==28 && month==2 && (year%100)==0)
      printf("The next day is:%d %d %d\n",(day-27),month+(1),year);
   else if(day==28 && month==2 && year%4==0)
      printf("The next day is:%d %d %d\n",day+(1),month,year);
   else if(day==29 && month==2 && year%4==0)
      printf("The next day is:%d %d %d\n",(day-28),month+(1),year);
   else
      printf("Error....Check the values you entered!!\n");
  return 0;
}
