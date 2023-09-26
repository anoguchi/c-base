#include<stdio.h>

int main()
{
    int a = 5, b = 10, n = 15, ret;
    

    ret = ((a <= b) || (a != b));
    printf("Return value of above expression is %d\n", ret);
    
    ret = ((a < b) && (a == b));
    printf("Return value of above expression is %d\n", ret);

    ret = !((a < b) && (a == b));
    printf("Return value of above expression is %d\n", ret);
    
    if(n > 10 && n <= 100)
        printf("Yes");
    else
        printf("No");

    return 0;
}
