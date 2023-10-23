#include <stdio.h>

int main()
{

  int variable = 128;

  printf("variable / 2 = %d \n", variable >> 1);
  printf("variable / 4 = %d \n", variable >> 2);
  printf("variable / 8 = %d \n", variable >> 3);

  return 0;
}