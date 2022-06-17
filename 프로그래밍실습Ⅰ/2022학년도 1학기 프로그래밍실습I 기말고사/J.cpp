#include <stdio.h>
#pragma warning(disable:4996)
 
 
int main(void) {
    int sizeX1, sizeY1;
    int sizeX2, sizeY2;
    int zerocount;
 
    int arr1[10][10] = { 0, }, arr2[10][10] = { 0, };
 
    while (1) {
        zerocount = 0;
        scanf("%d %d", &sizeX1, &sizeY1);
         
        //종료
        if (sizeX1 == 0 && sizeY1 == 0) {
            break;
        }
        for (int i = 0; i < sizeX1; i++) {
            for (int ii = 0; ii < sizeY1; ii++) {
                scanf("%d", &arr1[i][ii]);
            }
        }
 
        scanf("%d %d", &sizeX2, &sizeY2);
        for (int i = 0; i < sizeX2; i++) {
            for (int ii = 0; ii < sizeY2; ii++) {
                scanf("%d", &arr2[i][ii]);
            }
        }
 
        //Impossible
        if (sizeX1 != sizeX2 || sizeY1 != sizeY2) {
            printf("Impossible\n");
            continue;
        }
         
        for (int i = 0; i < sizeX1; i++) {
            for (int ii = 0; ii < sizeY1; ii++) {
                arr1[i][ii] = arr1[i][ii] - arr2[i][ii];
                if (arr1[i][ii] != 0) {
                    zerocount++;
                }
            }
        }
 
        //zero
        if (zerocount == 0){
            printf("Zero Matrix\n");
        }
        else {
            for (int i = 0; i < sizeX1; i++) {
                for (int ii = 0; ii < sizeY1; ii++) {
                    printf("%d ", arr1[i][ii]);
                     
                }
                printf("\n");
            }
        }
 
 
    }
    return 0;
}
/**************************************************************
    Problem: 1290
    User: 20192336
    Language: C
    Result: Accepted
    Time:3 ms
    Memory:1120 kb
****************************************************************/