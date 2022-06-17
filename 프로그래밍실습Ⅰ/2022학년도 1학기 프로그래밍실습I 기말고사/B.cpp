#include <stdio.h>
#pragma warning(disable:4996)
 
int main(void) {
    int testcase;
    int temp;
    int Joo, Min;
    int Joo_odd, Min_odd;
 
    scanf("%d", &testcase);
    while (testcase--) {
        Min_odd = Joo_odd = Joo = Min = 0;
 
        for (int i = 0; i < 3; i++) {
            scanf("%d", &temp);
            Joo += temp;
            if (temp % 2 == 1) { Joo_odd++; }
        }
        for (int i = 0; i < 3; i++) {
            scanf("%d", &temp);
            Min += temp;
            if (temp % 2 == 1) { Min_odd++; }
        }
        if (Joo == Min) {
            if (Joo_odd == Min_odd) {
                printf("Draw\n");
            }
            else {
                Joo_odd > Min_odd ? printf("Joo-Ahn wins\n") : printf("Min-Gwang wins\n");
 
            }
        }
        else {
            Joo > Min ? printf("Joo-Ahn wins\n") : printf("Min-Gwang wins\n");
        }
    }
    return 0;
}
/**************************************************************
    Problem: 1289
    User: 20192336
    Language: C
    Result: Accepted
    Time:4 ms
    Memory:1120 kb
****************************************************************/