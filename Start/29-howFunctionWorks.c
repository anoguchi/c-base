#include <stdio.h>

int sumOfTwoNumbers(int x, int y)
{
  int answer = x + y;
  return answer;
}

int main()
{
  int a = 10, b = 20, result;
  result = sumOfTwoNumbers(a, b);
  printf("Result = %d\n", result);

  return 0;
}