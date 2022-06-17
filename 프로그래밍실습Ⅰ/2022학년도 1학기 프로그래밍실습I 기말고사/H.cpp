#include <stdio.h>
#pragma warning(disable:4996)
 
 
 
int main(void) {
 
    int testcase;
    float average;
    int score[1000], stulen, result;
    scanf("%d", &testcase);
    while (testcase--) {
        average= result = 0;
        scanf("%d", &stulen);
        for (int i = 0; i < stulen; i++) {
            scanf("%d", &score[i]);
        }
        for (int i = 0; i < stulen; i++) {
            average += score[i];
        }
        average /= stulen;
        for (int i = 0; i < stulen; i++) {
            if (score[i] > average) {
                result++;
            }
        }
        printf("%d from total %d\n", result, stulen);
        //printf("avg: %f\n", average);
 
    }
    return 0;
}
/**************************************************************
    Problem: 1292
    User: 20192336
    Language: C
    Result: Accepted
    Time:3 ms
    Memory:1120 kb
****************************************************************/