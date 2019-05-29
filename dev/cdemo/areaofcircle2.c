#include <stdio.h>
#include <math.h>

float AreaOfCircleFunction (float r)
{
float A;
A = M_PI * pow(r,2);
return M_PI * pow(r,2);
}


int main(){
  char input[256];
  float r;
  printf("What is the radius of your circle? \n");
  while (1)
  {
    fgets(input, 256, stdin);
    if (sscanf(input, "%f", &r) ==1) break;
    printf("Not Valid. Please enter a valid radius: \n");
  }
  float A = AreaOfCircleFunction(r);
  printf("the area is %f\n", A);

}
