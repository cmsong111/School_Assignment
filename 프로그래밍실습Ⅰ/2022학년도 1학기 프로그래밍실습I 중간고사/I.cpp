#pragma warning(disable: 4996)
 
#include <stdio.h>
#include <math.h>
 
 
int check(double a, double b, double c) {
    double big = a;
    //큰수찾기
    if (big < b) {
        big = b;
    }
    if (big < c) {
        big = c;
    }
    //참 리턴
    if (big < (a + b + c - big)) {
        return (int)1;
    }
    else {
        return (int)0;
    }
}
 
int main(void) {
    int count;
    double a, b, c;
    double area,p;
    scanf("%d", &count);
 
    while (count--) {
        scanf("%lf %lf %lf", &a, &b, &c);
        if (check(a,b,c)==0) {
            printf("No Triangle!\n");
            continue;
        }
        else if (check(a, b, c) == 1) {
            p = (a + b + c) / 2;
            area = sqrt(p * (p - a) * (p - b) * (p - c));
            printf("%.10lf\n", area);
        }
    }
 
    return 0;
 
}
/**************************************************************
    Problem: 1245
    User: 20192336
    Language: C++
    Result: Accepted
    Time:4 ms
    Memory:1132 kb
****************************************************************/
