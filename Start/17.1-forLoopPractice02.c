#include<stdio.h> 

/* 
In the previous problem we have printed the numbers from 1 to N. In this problem from 1 to N only print the ODD numbers.

Example
Input

5

Output

1 3 5
*/


int main()
{
   int i;
   int n = 15;
   for(i = 1; i <= n; i++)
    if(i%2 != 0)
    {
        printf("%d ",i);
    }

    return 0; 
}