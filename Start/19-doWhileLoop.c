#include <stdio.h>

/*
Get input from the user and print it until the input is 100.
*/

int main()
{

    int number;

    do
    {
        printf("Enter a number\n");
        scanf("%d", &number);
        printf("%d\n", number);
    } while (number != 100);

    return 0;
}