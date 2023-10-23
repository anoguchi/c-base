#include<stdio.h>

int main()
{
  struct example
  {
    char c;
    int i;
  };

  struct example02
  {
    char c1;
    int i;
    char c2;
  };

  struct example03
  {
    int i;
    char c1;
    char c2;
  };

  // how to avoid padding?
  struct example04
  {
    char c1;
    int i;
    char c2;
  } __attribute__((packed));
  
  printf("%d\n", sizeof(struct example));
  printf("%d\n", sizeof(struct example02));
  printf("%d\n", sizeof(struct example03));
  
  return 0;
}