#include <stdio.h>
 
#pragma warning(disable: 4996)
 
int main(void) {
 
    int a, b, c, d;
     
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d\n", (a + b) / (c+d));
    printf("%d\n", (a + b) % (c + d));
    printf("%.5lf", (double)(a + b) / (c + d));
 
 
    return 0;
 
}
 
 
 
/**************************************************************
    Problem: 1241
    User: 20192336
    Language: C++
    Result: Accepted
    Time:3 ms
    Memory:1120 kb
****************************************************************/