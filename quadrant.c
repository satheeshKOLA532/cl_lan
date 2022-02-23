#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  int x,y;
  printf("Enter the x value:"); 
  scanf("%d",&x);
  printf("Enter tht y value:");
  scanf("%d",&y);

  if(x>0 && y>0)
    printf("FIRST QUADRANT\n");
  else if(x<0 && y>0)
    printf("SECOND QUADRANT\n");
  else if(x<0 && y<0)
    printf("THIRD QUADRANT\n");
  else if(x>0 && y<0)
    printf("FOURTH QUADRANT\n");
  else
    printf("AT CENTRE\n");
  return 0;
}
