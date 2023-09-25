#include<stdio.h>

int main()
{
    int var = 10;
    int age;
    float weight;

    printf("Value of var = %d \n", var);
    printf("Address of var = %x \n", &var);

    printf("Enter age and weight\n");
    scanf("%d%f", &age,&weight);
    printf("age = %d\nweight = %f\n", age, weight);

    return 0;
}