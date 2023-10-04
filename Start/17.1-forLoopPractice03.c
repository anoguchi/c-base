#include<stdio.h> 

/* 
In the previous problem we have printed the odd number between 1 to N. In this problem, print the sum of all the odd numbers between 1 to N.
Example
Input

5

Output

9 (1+3+5)
*/


int main()
{
   //Edit below this line
   int i;
   int n = 5;
   int sum = 0;
   for(i = 1; i <= n; i++)
    if(i%2 != 0)
    {
        sum +=i;
    }
    printf("%d ",sum);

    return 0; 
}