#include<stdio.h>

struct student
{
  int age;
  float weight;
};

void fun(struct student);

int main()
{
  struct student s = {15, 50.5};

  fun(s);

  return 0;
}

void fun(struct student obj)
{
  printf("Age = %d\n", obj.age);
  printf("Weight = %f\n", obj.weight);
}