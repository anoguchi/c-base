#include<stdio.h> 

/*  
Write a C program to get a string 'str' from the user and print its length without using any inbuilt functions. 
*/

int main()
{
    char str[] = "Log2Base2";
    int i, length = 0;
 
    for (i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    
    printf("%d\n", length);

    return 0; 
}