#include<stdio.h>

/* 
In the previous problem, we have printed sum of all the digits of a given number.

In this problem, you need to print the sum of odd and even numbers separately.
*/

int main()
{
    int number = 1256, odd_sum = 0, even_sum = 0, dig;

    while (number != 0) {
        dig = number%10;
        if (dig%2 == 0)
            even_sum += dig;
        else
            odd_sum += dig;
            
        number = number/10;
    }
    printf("Odd Digit Sum = %d\n", odd_sum);
    printf("Even Digit Sum = %d\n", even_sum);

    return 0; 
}