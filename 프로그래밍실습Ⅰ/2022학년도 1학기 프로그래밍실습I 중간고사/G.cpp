#include <stdio.h>
 
#pragma warning(disable: 4996)
 
 
int main(void) {
 
    int count;
    int score;
    scanf("%d", &count);
 
 
    for (int i = 0; i < count; i++) {
        scanf("%d", &score);
 
        if (score >= 95) {
            printf("A+\n");
        }
        else if (score >= 90) {
            printf("A0\n");
        }
        else if (score >= 85) {
            printf("B+\n");
        }
        else if (score >= 80) {
            printf("B0\n");
        }
        else if (score >= 75) {
            printf("C+\n");
        }
        else if (score >= 70) {
            printf("C0\n");
        }
        else if (score >= 65) {
            printf("D+\n");
        }
        else if (score >= 60) {
            printf("D0\n");
        }
        else {
            printf("F\n");
        }
 
    }
 
    return 0;
 
}
 
/**************************************************************
    Problem: 1244
    User: 20192336
    Language: C++
    Result: Accepted
    Time:3 ms
    Memory:1120 kb
****************************************************************/