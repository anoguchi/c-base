#include<stdio.h>

int main()
{
    int number;

    printf("Enter a number\n");
    scanf("%d", &number);

    number < 0 ? printf("Negative") : printf("Positive");

    return 0;
}