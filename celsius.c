#include<stdio.h>

int main()
{
  double fahrenheitDegrees;
  double celsiusDegrees;
 
  printf("Temperature in fahrenheit=");
  scanf("%lf", &fahrenheitDegrees);
 
  celsiusDegrees=(fahrenheitDegrees-32)/1.8;
  
  printf("Temperature in degree centigrade is = %.2lf C\n", celsiusDegrees);
  return 0;
}
