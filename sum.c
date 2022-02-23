#include<stdio.h>

int main()
{ 
  double a1,an;
  int n;
  float sn;

  printf("Enter the first term(a1)=");
  scanf("%lf",&a1);
  printf("Enter the n-th term(an)=");
  scanf("%lf",&an);
  printf("Enter the total number of terms(n)=");
  scanf("%d",&n);
  
  sn=(a1+an)*n/2;

  printf("The total sum of the sequence(sn)=%.2lf\n",sn);
  return 0;
}
