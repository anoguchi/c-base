#include<stdio.h>

int main()
{
  enum status {Sunday = 1, Monday, Tuesday, Wednesday = 10, Thurday, Friday, Saturday};

  int diff = Saturday - Sunday;

  printf("%d\n", diff);	
  printf("%d\n", diff); 
  return 0;
}


