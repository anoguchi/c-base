#include<stdio.h>

int main()
{
    int a, b;

    a = 10;
    b = a++;
    printf("%d\n",b);

    a = 10;
    b = ++a;
    printf("%d\n",b);

    return 0;
}