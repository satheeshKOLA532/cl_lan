#include<stdio.h>
#include<stdlib.h>

int main()
{
   int num;
   int hours,minutes,seconds;

   printf("Enter total seconds:");
   scanf("%d",&num);
  
   hours=num/3600;
   minutes=(num-hours*3600)/60;
   seconds=(num-hours*3600)%60;
   if (hours<10&&minutes<10&&seconds<10)
        printf("0%dh:0%dm:0%ds\n",hours,minutes,seconds);
   else if(hours<10&&minutes<10)
        printf("0%dh:0%dm:%ds\n",hours,minutes,seconds);
   else if(hours<10&&seconds<10)
        printf("0%dh:%dm:0%ds\n",hours,minutes,seconds);
   else if(minutes<10&&seconds<10)
        printf("%dh:0%dm:0%ds\n",hours,minutes,seconds);
   else if(hours<10)
        printf("0%dh:%dm:%ds\n",hours,minutes,seconds);
   else if(minutes<10)
        printf("%dh:0%dm:%ds\n",hours,minutes,seconds);
   else if(seconds<10)
        printf("%dh:%dm:0%ds\n",hours,minutes,seconds);
   else
        printf("%dh:%dm:%ds\n",hours,minutes,seconds);
   return 0;
}

   
