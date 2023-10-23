#include<stdio.h>

int main()
{
  // along with structure declaration
  struct car
  {
    char name[5];
    float price;
  };

  // using struct keyword
  struct car car03, car04;

  // initialize struct members
  struct car car05 = {"xyz", 2222.22};

  printf("Name of car05 = %s\n", car05.name);
  printf("Price of car05 = %f\n", car05.price);

  return 0;
}