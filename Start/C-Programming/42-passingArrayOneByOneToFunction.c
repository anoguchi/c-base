#include<stdio.h>

void display(int num)
{
  printf("%d\n", num);
}

int main()
{
  int arr[5] = {10, 20, 30, 40, 50};
  int i;

  for(i = 0; i < 5; i++)
    display(arr[i]);

  return 0;
}