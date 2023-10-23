#include<stdio.h>

void display(int array[],int size)
{
  int i;
  for(i = 0; i < size; i++)
    printf("%d\n", array[i]);
}

int main()
{
  int arr[5] = {10, 20, 30, 40, 50};
  display(arr, 5);

  return 0;
}