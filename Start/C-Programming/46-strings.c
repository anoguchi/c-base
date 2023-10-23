#include<stdio.h>

int main()
{
  char country[6] = "india";
  char country2[] = "Brazi";
  char country3[6] = {'j','a','p', 'a', 'n', '\0'};
  char country4[] = {'c','h','i', 'n', 'a', '\0'};

  printf("%s\n",country);
  printf("%s\n",country2);
  printf("%s\n",country3);
  country3[4] = 'o';
  printf("%s\n",country3);
  printf("%s\n",country4);
  printf("%c\n",country[4]);
   
  return 0;
}