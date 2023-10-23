#include<stdio.h>

void fun(char c)
{
    printf("%c\n", c);
}

int main()
{
  char str[6] = "Hello";
  int i;

  for(i = 0; str[i]; i++)
    fun(str[i]);
  return 0;
}