#include<stdio.h> 

/* 
Write C program to get a positive number from the user N (N > 0). And print the numbers from 1 to N (including N).
Example
Input 

5

Output

1 2 3 4 5

(Note: Numbers should be separated by space)
*/


int main()
{
   int i;
   int n = 15;
   for(i = 1; i <= n; i++)
    {
        printf("%d ",i);
    }

    return 0; 
}