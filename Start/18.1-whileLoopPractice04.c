#include<stdio.h>

/* 
In the previous problem, we have printed the sum of odd and even digits.

In this problem, you need to print the sum of odd and even position digits.
(Note: Position count starts from the right side of the number)
*/

int main()
{
    int number = 1246, odd_position = 0, even_position = 0, dig, i = 0;

    while (number != 0) {
        i++;
        dig = number%10;
        if (i%2 == 0)
            even_position += dig;
        else
            odd_position += dig;
            
        number = number/10;
    }
    printf("Odd Position Sum = %d\n", odd_position);
    printf("Even Position Sum = %d\n", even_position);

    return 0; 
}