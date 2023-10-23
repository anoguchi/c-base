#include<stdio.h>

#define ROW 2
#define COL 2

void fun(int num)
{
  printf("%d\n",num);
}

int main()
{
  int arr[ROW][COL] = {10, 20, 30, 40};
  int i, j;

  for(i = 0; i < ROW; i++)
    for(j = 0, j < COL; j++);
      fun(arr[i][j]);

  return 0;
}