#include<stdio.h>

void setToZero(int *a)
{
    *a = 0;
}


int main()
{
    int a = 10;
    printf("Before calling the function a = %d\n", a);
    setToZero(&a);
    printf("After calling the function a = %d\n", a);
    
    return 0;
}
