#include<stdio.h>

int main()
{
    int a = 5, b = 10, c = 10, d = 10;
    printf("Return value of (%d == %d) is %d\n", a, b, a == b);
    printf("Return value of (%d != %d) is %d\n", a, b, a != b);
    printf("Return value of (%d < %d) is %d\n", a, b, a < b);
    printf("Return value of (%d <= %d) is %d\n", a, b, a <= b);
    printf("Return value of (%d > %d) is %d\n", a, b, a > b);
    printf("Return value of (%d >=%d) is %d\n", a, b, a >= b);

    if(c == d)
        printf("Same");
    else
        printf("Different");

    return 0;
}