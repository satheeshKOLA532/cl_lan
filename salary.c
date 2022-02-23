#include<stdio.h>

int main()
{
  double salary;
  double totalHours;
  double totalsalary;
  
  printf("Enter the salary(per hour)=");
  scanf("%lf",&salary);
  printf("Total hours worked(in a month)=");
  scanf("%lf",&totalHours);

  totalsalary=salary*totalHours;

  printf("Total monthly salary=%.3lf RS\n",totalsalary);
  return 0;
}
