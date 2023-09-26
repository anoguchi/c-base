#include<stdio.h>

int main()
{
    char c;
    double d;
    int var1 = 5, var2 = 5;

    printf("sizeof variable c = %d\n", sizeof(c));
    printf("sizeof variable d = %d\n", sizeof(d));
    printf("sizeof(10) = %d\n", sizeof(10));

    // 5 is displayed
    // Then, var1 is increased to 6.
    printf("%d\n", var1++);
    printf("%d\n", var1);

    // var2 is increased to 6 
    // Then, it is displayed.
    printf("%d\n", ++var2);

    return 0;
}