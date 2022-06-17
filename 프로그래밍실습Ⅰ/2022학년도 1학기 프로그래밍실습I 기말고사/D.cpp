#include <stdio.h>
 
 
#pragma warning(disable:4996)
 
 
int main(void) {
    int testcase;
    int money_get[7] = {3,3,3,3,3,6,8 };
    int target,now_money,day;
    scanf("%d", &testcase);
 
    while (testcase--) {
        scanf("%d", &target);
        now_money = day = 0;
 
        while (target > now_money) {
            now_money += money_get[day % 7]*9000;
            day++;
            //printf("now : %d day : %d erand: %d \n", now_money, day, money_get[day % 7] * 9000);
        }
        printf("%d\n",day);
    }
    return 0;
}
/**************************************************************
    Problem: 1283
    User: 20192336
    Language: C
    Result: Accepted
    Time:3 ms
    Memory:1120 kb
****************************************************************/