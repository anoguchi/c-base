#include<stdio.h>

void fun(char c[])
{
    int i;

    for(i = 0; c[i]; i++)
      printf("%c\n", c[i]);
}

int main()
{
  char str[6] = "Hello";

  fun(str);

  return 0;
}