#include<stdio.h>

struct student
{
  char name[4];
  int age;
  int roll;
};

int main()
{
  struct student s[3];
  int i;

  printf("Enter Student Details\n");

  for(i = 0; i < 3; i++)
    scanf("%s%d%d", s[i].name,&s[i].age,&s[i].roll);

  for(i = 0; i < 3; i++)
    printf("%s\t%d\t%d\n", s[i].name,s[i].age,s[i].roll);


  return 0;
}