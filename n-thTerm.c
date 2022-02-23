#include<stdio.h>

int main()
{
  double a1,d;
  int n;
  int nthTerm;

  printf("Enter the initial term(a1)=");
  scanf("%lf",&a1);
  printf("Enter the comman difference(d)=");
  scanf("%lf",&d);
  printf("Enter the total number of terms(n)=");
  scanf("%d",&n);
  
  nthTerm=a1+(n-1)*d;
  
  printf("The n-th term is =%d\n",nthTerm);
  return 0;
}
