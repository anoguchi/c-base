#include<stdio.h>

/* 
Print the address of below variables also increment their address value by 1 and see the difference.
*/

int main()
{
    int i = 10;
    printf("%d\n", &i);
    printf("%d\n", &i + 1);
    
    char c = 'a';
    printf("%c\n", &c);
    printf("%c\n", &c + 1);
    
    return 0;
}
