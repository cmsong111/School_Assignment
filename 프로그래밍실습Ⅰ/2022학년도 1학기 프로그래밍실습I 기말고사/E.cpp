#include <stdio.h>
 
 
#pragma warning(disable:4996)
 
 
int main(void) {
    int tc;
    int bullet;
    scanf("%d", &tc);
    for (int testcase=0; testcase < tc; testcase++) {
        scanf("%d", &bullet);
        printf("Case #%d:\n", testcase + 1);
 
        for (int i = 1; i < bullet+1; i++) {
            for (int ii = 1; ii <= i; ii++) {
                printf("*");
            }
            printf("\n");
        }
        for (int i = bullet-1; i >0; i--) {
            for (int ii = 1; ii <= i; ii++) {
                printf("*");
            }
            printf("\n");
        }
 
        printf("\n");
 
    }
    return 0;
}
/**************************************************************
    Problem: 1287
    User: 20192336
    Language: C
    Result: Accepted
    Time:3 ms
    Memory:1120 kb
****************************************************************/