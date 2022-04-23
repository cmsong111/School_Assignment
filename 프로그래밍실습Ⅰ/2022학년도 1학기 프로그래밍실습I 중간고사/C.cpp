#include <stdio.h>
 
#pragma warning(disable: 4996)
 
int main(void) {
 
    int a, b;
     
    scanf("%d %d", &a, &b);
 
    printf("%d\n", a * (b % 10));
    printf("%d\n", a * (b / 10));
    printf("%d", a * b);
     
 
 
    return 0;
 
}
 
 
/**************************************************************
    Problem: 1239
    User: 20192336
    Language: C++
    Result: Accepted
    Time:4 ms
    Memory:1120 kb
****************************************************************/
