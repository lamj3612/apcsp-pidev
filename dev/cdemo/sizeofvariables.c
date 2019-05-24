#include<stdio.h>

int main()
{
  int a = 545;
  char b = 'p';
  float c = 5210;
  double d = 5225.8;




  // print value and size of an int variable
  printf("int has a size of %d bytes\n", a, sizeof(a));
  printf("char has a size of %c bytes\n", b, sizeof(b));
  printf("float has a size of %f bytes\n", c, sizeof(c));
  printf("double has a size of %f bytes\n", d, sizeof(d));
}

