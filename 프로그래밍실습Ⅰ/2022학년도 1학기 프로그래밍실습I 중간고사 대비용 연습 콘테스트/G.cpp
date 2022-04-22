#include <stdio.h>
 
int main(void)
{
    int num[6];
    int result = 0;
    int ODD, EVEN;
    int answer = 0;
 
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &num[i]);
    }
    //합계
    for (int i = 0; i < 6; i++)
    {
        result += num[i];
    }
    if (91 <= result && result <= 180)
    {
        answer++;
    }
    //홀짝 비율
    EVEN = ODD =0;
    for (int i = 0; i < 6; i++)
    {
        if (num[i] % 2 == 0)
        {
            EVEN++;
        }
        else
        {
            ODD++;
        }
    }
    if (EVEN == 2 && ODD == 4){
        answer++;
    }
    else if (EVEN == 3 && ODD == 3){
        answer++;
    } 
    else if (EVEN == 4 && ODD == 2){
        answer++;
    } 
 
    if (answer == 2){
        printf("BEST");
    }
    else if (answer == 1){
        printf("GOOD");
    }
    else if (answer == 0){
        printf("BAD");
    }
}