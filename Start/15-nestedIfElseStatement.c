#include<stdio.h>
int main()
{
    int score;
    printf("Enter your score\n");
    scanf("%d", &score);

    if (score <= 100 && score >= 90)
        printf("S");
    else if(score < 90 && score >= 80)
        printf("A");
    else if(score < 80 && score >= 70)
        printf("B");
    else if(score < 70 && score >= 60)
        printf("C");
    else if(score < 60 && score >= 50)
        printf("D");
    else if(score == 50)
        printf("E");
    else if(score < 50 && score >= 0)
        printf("U");
    else 
        printf("Enter a valid score between 0 and 100");
    return 0;
}