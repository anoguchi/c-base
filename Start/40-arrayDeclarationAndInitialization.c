#include<stdio.h>

int main()
{
  int x = 5;
  int arr[x];
  int i;

  printf("Enter %d integers\n", x);

  for(i = 0; i < x; i++)
    scanf("%d", &arr[i]);

  for(i = 0; i < x; i++)
    printf("%d,", arr[i]);

  return 0;
}
