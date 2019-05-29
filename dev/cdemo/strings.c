#include <stdio.h>
#include <string.h>

int main(void) {

  char str1[50] = "abcdefghijklmnopqrstuvwxyz";
  char str2[50];
  char c = 'a';
  int i;
  
  for (i = 0; i < 26; i++)
  {
    str2[i] = c;
    c++;
  }

  printf("string 1 is %s, string 2 is %s\n",str1, str2);

if (strcmp(str1, str2) == 0)
  printf("the strings are identical\n");
else
  printf("the strings are different\n");


char str3[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char str4[50];
c = 'A';

  for (i = 0; i < 26; i++)
  {
    str3[i] = c;
    c++;
  }
  printf("\n\nstring1 is %s,string 2 is %s\n", str1, str3);

  strcat(str2, str3);

  printf("string 3 is %s", str2, str3);
}
