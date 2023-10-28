#include<stdio.h>

int main()
{
  
  struct date
  {
    unsigned int day : 5;
    unsigned int month : 4;
    unsigned int year : 23;
  };
  struct date d;

  d.day = 2;
  d.month = 7;
  d.year = 2023;

  printf("%d-%d-%d\n", d.day,d.month, d.year);
}


