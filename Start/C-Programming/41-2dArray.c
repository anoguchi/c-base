#include<stdio.h>

int main()
{
  int arr[3][3], row, col;
  for(row = 0; row < 3; row++)
  {
    for(col = 0; col < 3; col++)
    {
      scanf("%d", &arr[row][col]);
    }
  }
  for(row = 0; row < 3; row++)
  {
    for(col = 0; col < 3; col++)
    {
      printf("arr[%d][%d] = %d\n", row, col, arr[row][col]);
    }
  }
  return 0;
}