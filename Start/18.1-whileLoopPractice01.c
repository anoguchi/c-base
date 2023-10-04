#include<stdio.h>

/* 
Write a C program to get a positive integer from the user. And print it's digits one by one. 
*/

int main()
{
    int number = 1256, dig;
    while(number > 0)
    {
        dig = number%10;
        printf("%d\n", dig);
        number = number/10;
    }

    return 0; 
}