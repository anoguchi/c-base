#include<stdio.h>
#include<string.h>

int main()
{
  char str[12] = "Hello World";
  char str02[6] = " Beto";
  char str03[21] = "Julia Yukiko Noguchi";
  char str04[4] = "abc";
  char str05[4] = "abc";
  char copy[12];
  int length;
  char *pos;
  char *pos02;

  length = strlen(str);
  strcpy(copy, str); //copy
  strcat(str, str02); // concatenation
  pos = strchr(str, 'o'); // first Occurrence of a Character
  pos02 = strstr(str03, "Yukiko"); // first Occurrence of String

  printf("Length = %d\n", length);
  printf("Copy = %s\n", copy);
  printf("Concat = %s\n", str);
  printf("First Occurrence = %c\n", *pos);
  printf("First Occurrence of String = %s\n", pos02);

  // string comparison
  if(strcmp(str04, str05) == 0)
    printf("Equal\n");
  else
    printf("Different\n");



  return 0;
}