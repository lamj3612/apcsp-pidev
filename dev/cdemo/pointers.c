#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  int d = 7;
  int e = 3;
  printf("The value of d is %d\n", d);
  printf("The address of d is %d\n", &d);
  printf("The value of e is %d\n", e);
  printf("The address of e is %d\n", &e);

  int* ptrtod = &d;
  
  e = *ptrtod;
  *ptrtod = 3;
  printf("the value of d is now %d\n", d);
  printf("the value of e is now %d\n", e);


}
