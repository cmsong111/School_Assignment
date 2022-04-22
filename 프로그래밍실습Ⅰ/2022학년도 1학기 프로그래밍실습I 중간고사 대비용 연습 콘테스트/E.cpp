#include <stdio.h>
 
int main(void)
{
 
    int score;
 
    scanf("%d", &score);
 
    if (score == 100)
    {
        printf("Perfect! Congratulations!");
    }
    else if (score >= 90)
    {
        printf("Very good!");
    }
    else if (score >= 80)
    {
        printf("Good!");
    }
    else if (score >= 70)
    {
        printf("Not bad!");
    }
    else
    {
        printf("Study hard!");
    }
 
    return 0;
}