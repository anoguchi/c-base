#include <stdio.h>

int factorial(int n)
{
  if (n <= 1)
    return 1;
  return n * factorial(n - 1);
}

int main()
{
  int n, ans;

  scanf("%d", &n);

  if (n >= 0)
  {
    ans = factorial(n);
    printf("%d", ans);
  }

  return 0;
}