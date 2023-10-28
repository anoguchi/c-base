#include<stdio.h>

union data
{
  int i;
  float f;
};

void fun(union data);

int main()
{
  
  union data d;
  d.i = 100;

  fun(d);

  return 0;
}

void fun(union data obj)
{
  printf("i = %d\n", obj.i);
}

