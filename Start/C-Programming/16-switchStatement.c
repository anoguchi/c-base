#include<stdio.h>

int main()
{
    int number1, number2, choice;
    
    printf("Enter two numbers\n");
    scanf("%d%d", &number1,&number2);

    printf("Press \n 1 for sum \n 2 for sub \n 3 for mul \n 4 for div\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("Sum = %d\n",number1 + number2);
        break;
    case 2:
        printf("Sub = %d\n",number1 - number2);
        break;    
    case 3:
        printf("Mul = %d\n",number1 * number2);
        break; 
    case 4:
        printf("Div = %d\n",number1 / number2);
        break;   
    default:
        printf("Enter a valid choice\n");
    }
}