#include<stdio.h>

int main()
{
    int a = 10;
    int *ptr = &a;
    int **dptr = &ptr;

    printf("Address of a = %p\n", &a);
    printf("ptr is poiting to the address = %p\n", ptr);
    printf("dptr is pointing the the address = %p\n", dptr);
    printf("Value of a = %d\n", a);
    printf("*ptr = %d\n", *ptr);
    printf("**dptr = %d\n", **dptr);
    
    return 0;
}
