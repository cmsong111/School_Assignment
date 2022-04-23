#include <stdio.h>
 
#pragma warning(disable: 4996)
 
 
#include <stdio.h>
 
int main(void) {
    int count;
    int value, c500, c100;
    int j10000, j5000, j1000;
    scanf("%d", &count);
 
    while (count--) {
        scanf("%d", &value);
        if (value == 0) {
            printf("Sorry\n");
            continue;
        }
 
        j10000 = value / 10000;
        value = value % 10000;
 
        j5000 = value / 5000;
        value = value % 5000;
 
        j1000 = value / 1000;
        value = value % 1000;
 
        c500 = value / 500;
        value = value % 500;
 
        c100 = value / 100;
        value = value % 100;
 
        if (value != 0) {
            printf("Sorry\n");
        }
        else {
            printf("BILL : %d %d %d, COIN : %d %d\n", j10000, j5000, j1000, c500, c100);
        }
 
    }
 
    return 0;
 
}
/**************************************************************
    Problem: 1246
    User: 20192336
    Language: C++
    Result: Accepted
    Time:4 ms
    Memory:1120 kb
****************************************************************/