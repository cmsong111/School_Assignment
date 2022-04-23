#include <stdio.h>
 
#pragma warning(disable: 4996)
 
int main(void) {
 
 
    int hour, min, add, PM = 0;
 
    scanf("%d %d", &hour, &min);
    scanf("%d", &add);
    min += add;
 
    while (min >= 60) {
        min -= 60;
        hour++;
    }
 
    while (hour >= 12) {
        hour -= 12;
        PM++;
    }
 
 
    if (PM % 2 == 1 && hour == 0) {
        printf("PM 12:%d",min);
    }
 
    else if (PM % 2 == 0) {
        printf("AM %d:%d", hour, min);
    }
 
    else {
        printf("PM %d:%d", hour, min);
    }
 
 
 
 
 
    return 0;
 
}
 
 
/**************************************************************
    Problem: 1240
    User: 20192336
    Language: C++
    Result: Accepted
    Time:3 ms
    Memory:1120 kb
****************************************************************/