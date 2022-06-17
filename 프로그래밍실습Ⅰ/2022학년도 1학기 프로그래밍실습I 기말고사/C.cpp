#include <stdio.h>
 
 
#pragma warning(disable:4996)
 
 
int main(void) {
    int testcase;
    int arr[50], len,min,max,temp;
    while (1) {
        scanf("%d", &len);
        if (len == 0) {
            break;
        }
        scanf("%d", &temp);
        max =min = temp;
        for (int i = 1; i < len; i++) {
            scanf("%d", &temp);
            if (max < temp) {
                max = temp;
            }
            if (min > temp) {
                min = temp;
            }
        }
        (max - min) % 2 == 0 ? printf("Yes\n") : printf("No\n");
    }
    return 0;
}
/**************************************************************
    Problem: 1284
    User: 20192336
    Language: C
    Result: Accepted
    Time:3 ms
    Memory:1120 kb
****************************************************************/