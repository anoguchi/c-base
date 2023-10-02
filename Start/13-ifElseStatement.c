#include<stdio.h>

int main()
{
    int number;

    printf("Enter any number\n");
    scanf("%d", &number);

    if(number == 0)
        printf("Zero");
    else
        printf("Non-zero");

    return 0;
}