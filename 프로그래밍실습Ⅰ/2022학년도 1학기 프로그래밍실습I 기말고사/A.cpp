#include <stdio.h>
#pragma warning(disable:4996)
 
int main(void) {
    int testcase;
    int num[4];
 
    scanf("%d", &testcase);
    while (testcase--) {
 
        scanf("%d %d %d %d", &num[0], &num[1], &num[2], &num[3]);
        if (num[0] + num[1] > num[2] + num[3]) {
            printf("Kim DS wins\n");
        }
        else if (num[0] + num[1] == num[2] + num[3]) {
            printf("Draw\n");
        }
        else if (num[0] + num[1] < num[2] + num[3]) {
            printf("Yoo HJ wins\n");
        }
    }
    return 0;
}
/**************************************************************
    Problem: 1286
    User: 20192336
    Language: C
    Result: Accepted
    Time:3 ms
    Memory:1120 kb
****************************************************************/
