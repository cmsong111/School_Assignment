#include <stdio.h>
#pragma warning(disable:4996)
 
 
 
int main(void) {
 
    int testcase;
    int num1, num2, num3;
 
    scanf("%d", &testcase);
    while (testcase--) {
        scanf("%d %d", &num1, &num2);
        num1 = num1 / 100 + (num1 % 100) / 10 + num1 % 10;
        num2 = num2 / 100 + (num2 %100) / 10 + num2 % 10;
        //printf("%d %d\n", num1, num2);
        num3 = num1 + num2;
 
        printf("%d\n", num3 / 10 + num3 % 10);
 
    }
    return 0;
}
/**************************************************************
    Problem: 1291
    User: 20192336
    Language: C
    Result: Accepted
    Time:3 ms
    Memory:1120 kb
****************************************************************/