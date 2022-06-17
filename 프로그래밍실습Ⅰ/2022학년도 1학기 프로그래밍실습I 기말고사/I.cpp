#include <stdio.h>
#pragma warning(disable:4996)
 
 
 
int main(void) {
 
    int testcase;
    int count[10] = { 0, };
    int numlen,temp;
     
 
    scanf("%d", &testcase);
    while (testcase--) {
        //초기화
        for (int i = 0; i < 10; i++) {
            count[i] = 0;
        }
        scanf("%d", &numlen);
        for (int i = 0; i < numlen; i++) {
            scanf("%d", &temp);
            temp %= 10;
            count[temp]++;
        }
        for (int i = 0; i < 10; i++) {
            printf("%d : %d\n", i, count[i]);
        }
 
        printf("\n");
    }
    return 0;
}
/**************************************************************
    Problem: 1294
    User: 20192336
    Language: C
    Result: Accepted
    Time:4 ms
    Memory:1120 kb
****************************************************************/