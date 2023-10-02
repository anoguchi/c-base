#include<stdio.h>

int main()
{
    int number01, number02;

    printf("Enter two integers\n");
    scanf("%d%d", &number01,&number02);

    if(number02 != 0)
        printf("number01 / number02 = %d\n", number01/number02);

    return 0;
}