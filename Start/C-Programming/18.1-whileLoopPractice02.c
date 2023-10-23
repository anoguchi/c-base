#include<stdio.h>

/* 
In the previous problem we have printed all the digits of the given number.
In this problem you need to print the sum of all the digits.

In C programming, we use the operators % 10 and / 10 when printing numbers to separate 
the digits of the number.

The modulus operator % returns the remainder when the first operand is divided by 
the second operand. So, x % 10 returns the last digit of the number x. For example, 
if x is 1234, then x % 10 would return 4, which is the last digit of the number.

On the other hand, the division operator / returns the quotient when the first 
operand is divided by the second operand. So, x / 10 returns the number x with 
the last digit removed. For example, if x is 1234, then x / 10 would return 123, 
which is x with the last digit 4 removed.

By using % 10 and / 10 in a loop, we can separate each digit of the number one 
by one, starting from the last digit, and print them in the correct order.
*/

int main()
{
    int number = 1256, sum = 0;
    while(number != 0)
    {
        sum = sum + number%10;
        number = number/10;
    }
    printf("%d", sum);

    return 0; 
}