#pragma warning(disable: 4996)
 
#include <stdio.h>
 
int main(void) {
 
    int arr[3];
    int temp;
 
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    //3개가 동일
    if (arr[0] == arr[1] && arr[1] == arr[2]) {
        printf("%d", 20000 + arr[0] * 2000);
    }
    //2개가 동일
    else if (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2]) {
        if (arr[0] == arr[1]) {
            printf("%d", 5000 + arr[1] * 2000);
        }
        else if (arr[1] == arr[2]) {
            printf("%d", 5000 + arr[1] * 2000);
        }
        else if (arr[0] == arr[2]) {
            printf("%d", 5000 + arr[0] * 2000);
        }
    }
    //다 다를떄
    else {
        //printf("%d %d %d\n", arr[0], arr[1], arr[2]);
        if (arr[0] > arr[1]) {
            temp = arr[0];
            arr[0] = arr[1];
            arr[1] = temp;
        }
        //printf("%d %d %d\n", arr[0], arr[1], arr[2]);
        if (arr[1] > arr[2]) {
            temp = arr[1];
            arr[1] = arr[2];
            arr[2] = temp;
        }
        //printf("%d %d %d\n", arr[0], arr[1], arr[2]);
        if (arr[0] > arr[1]) {
            temp = arr[0];
            arr[0] = arr[1];
            arr[1] = temp;
        }
        //printf("%d %d %d\n", arr[0], arr[1], arr[2]);
        if (arr[1] > arr[2]) {
            temp = arr[1];
            arr[1] = arr[2];
            arr[2] = temp;
        }
        //printf("%d %d %d", arr[0], arr[1], arr[2]);
 
        printf("%d", arr[1] * 500);
    }
 
 
    return 0;
}
/**************************************************************
    Problem: 1242
    User: 20192336
    Language: C++
    Result: Accepted
    Time:4 ms
    Memory:1120 kb
****************************************************************/