#include <stdio.h>
 
#pragma warning(disable: 4996)
 
int main(void) {
 
 
    int count, temp = 0;
    int score = 0;
    scanf("%d", &count);
    while (count--) {
        score = 0;
        scanf("%d", &temp);
        if (temp % 3 == 0) {
            score++;
        }
        if ((temp / 10) == 3) {
            score++;
        }
        if ((temp % 10) == 3) {
            score++;
        }
         
        if (score == 0) {
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
 
    }
 
 
 
    return 0;
 
}
 
 
/**************************************************************
    Problem: 1247
    User: 20192336
    Language: C++
    Result: Accepted
    Time:3 ms
    Memory:1120 kb
****************************************************************/