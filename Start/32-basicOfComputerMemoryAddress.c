#include <stdio.h>

/*
Print the address of below variable in hexadecimal format.
*/

int main()
{
  int i = 10;
  
  printf("%x", &i);

  return 0;
}