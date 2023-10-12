#include<stdio.h>

/* 
Write a C program to get an array and display the sum.
*/

int main()
{
  int x = 5;
  int arr[x];
  int i;
  int sum = 0;

  printf("Enter %d integers\n", x);

  for(i = 0; i < x; i++)
    scanf("%d", &arr[i]);

  for(i = 0; i < x; i++)
    sum = sum + arr[i];
    
  printf("%d", sum);

  return 0;
}