#include<stdio.h>

#define ROW 2
#define COL 2

void fun(int array[][COL])
{
  int i,j;
  for(i = 0; i < ROW; i++)
    for(j = 0; j < COL; j++)
      printf("%d\n", array[i][j]);
}

int main()
{
  int arr[ROW][COL] = {10, 20, 30, 40};
  fun(arr);

  return 0;
}