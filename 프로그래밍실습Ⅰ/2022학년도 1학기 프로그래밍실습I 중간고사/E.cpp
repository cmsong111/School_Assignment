#include <stdio.h>
 
#pragma warning(disable: 4996)
 
int main(void) {
 
 
    int a, b;
    int count;
    scanf("%d", &count);
    while (count--) {
        scanf("%d %d", &a, &b);
        if ((65 <= a && a <= 90) || (97 <= a && a <= 122)) {
            if ((65 <= a + b && a + b <= 90) || (97 <= a + b && a + b <= 122)) {
                printf("%c%c%c\n", a + b, a + b, a + b);
            }
            else {
                printf("No Alphabet!\n");
            }
        }
        else {
            printf("No Alphabet!\n");
        }
 
    }
 
 
 
    return 0;
 
}
 
 
/**************************************************************
    Problem: 1243
    User: 20192336
    Language: C++
    Result: Accepted
    Time:3 ms
    Memory:1120 kb
****************************************************************/