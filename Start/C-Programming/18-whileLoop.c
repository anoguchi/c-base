#include<stdio.h>

/* 
Get integer number from user and display 
how many times it can be divided by 2 until becames one 
*/

int main()
{
    int number, count = 0;
    printf("Enter a number\n");
    scanf("%d",&number);

    while(number > 1)
    {
        count++;
        number = number >> 1; // equal to number = number / 2
    }

    printf("%d", count);

    return 0;
}