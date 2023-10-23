#include <stdio.h>

int square(int n)
{
  int s = n * n;
  return s;
}

int cube(int n)
{
  int c = n * square(n);
  return c;
}

int main()
{
  int ans = cube(5);
  printf("cube(5) = %d\n", ans);

  return 0;
}