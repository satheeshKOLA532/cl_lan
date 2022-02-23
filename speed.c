#include<stdio.h>

int main()
{
  double distance,speed;
  float Time;

  printf("Distance b/n cityA to cityB (km)=");
  scanf("%lf",&distance);
  printf("Speed of vehicle(km/hr)=");
  scanf("%lf",&speed);

  Time=distance/speed;
  
  printf("Time taken by the car to move from cityA to cityB =%.3lf HRS.\n",Time);
  return 0;
}
