#include<stdio.h>

int main()
{
    int a = 10;
    int *ptr = &a;

    printf("Value of a = %d\n", a);
    printf("Value stored at ptr = %d\n", *ptr);
    printf("Address of a = %d\n", &a);
    printf("ptr points to the address = %d\n", ptr);
    printf("Address of ptr = %d\n", &ptr);
    
    return 0;
}
