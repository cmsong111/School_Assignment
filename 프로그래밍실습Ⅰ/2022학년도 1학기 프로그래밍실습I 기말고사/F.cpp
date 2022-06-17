#include <stdio.h>
#pragma warning(disable:4996)
 
 
int main(void) {
 
    int testcase;
    int height;
    scanf("%d", &testcase);
 
    while (testcase--) {
        scanf("%d", &height);
 
        if (height % 2 == 1) {
            height++;
        }
 
        for (int i = 1; i < height; i += 2) {
            for (int ii = 0; ii < (height - i) / 2; ii++) {
                printf(" ");
            }
 
            for (int ii = 0; ii < i; ii++) {
                if (ii == 0 || ii == i-1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
 
        }
        for (int i = height - 3; i > 0; i -= 2) {
            for (int ii = 0; ii < (height - i) / 2; ii++) {
                printf(" ");
            }
 
            for (int ii = 0; ii < i; ii++) {
                if (ii == 0 || ii == i - 1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        for (int i = 0; i < height - 1; i++) {
            for (int ii = 0; ii < height - 1; ii++) {
 
                if (ii == 0 || ii == height - 2 || i == 0 || i == height - 2) {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
 
 
    }
    return 0;
}
/**************************************************************
    Problem: 1295
    User: 20192336
    Language: C
    Result: Accepted
    Time:3 ms
    Memory:1120 kb
****************************************************************/