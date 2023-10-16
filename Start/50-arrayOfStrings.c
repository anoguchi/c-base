#include<stdio.h>

int main()
{
  char subject[5][20] = {"Beto", "Hiro", "Silva", "André", "João"};
  int i;

  for(i = 0; i < 5; i++)
    printf("%s\n", subject[i]);

  return 0;
}