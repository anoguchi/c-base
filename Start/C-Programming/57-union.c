#include<stdio.h>

int main()
{
  
  union value
  {
    int i;
    char c;
  };
  union value v;

  v.i = 10;
  v.c = 'a';
  printf("i = %d \t c = %c\n", v.i, v.c);

  return 0;
}

