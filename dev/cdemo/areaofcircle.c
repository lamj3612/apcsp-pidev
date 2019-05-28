#include <stdio.h>
#include <math.h>

int AreaOfCircleFunction (float r)
{
return M_PI * pow(r,2);
}


int main()
{
  float A;
  for (float i = 3.5; i < 13.5; i++)
  {
  A = AreaOfCircleFunction(i);
  printf("radius= %f area= %f\n",i,A);
  }
}
