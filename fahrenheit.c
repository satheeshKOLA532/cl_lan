#include<stdio.h>

int main()
{
  double celsiusDegrees;
  double fahrenheit;
  
  printf("Temperature in celsiusDegrees=");
  scanf("%lf",&celsiusDegrees);
  
  fahrenheit=celsiusDegrees*1.8+32;
  
  printf("Temperature in fahrenheit=%.3lf F\n",fahrenheit);
  return 0;
}
