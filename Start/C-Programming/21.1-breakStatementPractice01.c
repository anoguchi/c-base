#include <stdio.h>

int main()
{
  int number;

  while (1)
  {
    printf("Enter a number\n");
    scanf("%d", &number);

    if (number % 2 != 0)
      break;

    printf("%d\n", number);
  }

  return 0;
}