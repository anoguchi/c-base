#include<stdio.h> 

/* 
In the previous problem we have printed the sum of odd numbers between 1 to N. In this problem, print the sum of all the even numbers between 1 to N.
Example
Input

5

Output

6 (2+4)
*/


int main()
{
   int i;
   int n = 8;
   int sum = 0;
   for(i = 1; i <= n; i++)
    if(i%2 == 0)
    {
        sum +=i;
    }
    printf("%d ",sum);

    return 0; 
}