#include <stdio.h>
#pragma warning(disable:4996)
 
int main(void) {
 
    int testcase, sizeX, sizeY, mine;
    char input_temp[37];
    int field[37][37] = { 0, };
 
    scanf("%d", &testcase);
 
    while (testcase--) {
        mine = 0;
        scanf("%d %d", &sizeX, &sizeY);
        sizeX++;
        sizeY++;
 
        for (int i = 1; i < sizeX; i++) {
            scanf("%s", input_temp);
            for (int ii = 0; ii < sizeY - 1; ii++) {
                if (input_temp[ii] == '@') {
                    field[i][ii + 1] = 20;
                    mine++;
                }
                else if (input_temp[ii] == '-') {
                    field[i][ii + 1] = 0;
                }
                else {
                    field[i][ii + 1] = 0;
                }
            }
        }
 
        //마인 주변 3*3 전부 다 1씩 추가하기
        for (int i = 1; i < sizeX; i++) {
            for (int ii = 1; ii < sizeY; ii++) {
                if (field[i][ii] >= 20) { // 해당값이 마인이면
                    for (int iii = i - 1; iii < i + 2; iii++) {
                        for (int iiii = ii - 1; iiii < ii + 2; iiii++) {
                            field[iii][iiii]++;
                        }
                    }
                }
            }
        }
 
 
        //출력부
        printf("%d %d\n", (sizeX - 1) * (sizeY - 1), mine);
        if (mine == 0) {
            printf("No Mine\n");
        }
        else {
            for (int i = 1; i < sizeX; i++) {
                for (int ii = 1; ii < sizeY; ii++) {
                    if (field[i][ii] >= 20) {
                        printf("@");
                    }
                    else {
                        printf("%d", field[i][ii]);
                    }
                }
                printf("\n");
            }
        }
    }
 
    return 0;
}
/**************************************************************
    Problem: 1282
    User: 20192336
    Language: C
    Result: Accepted
    Time:4 ms
    Memory:1120 kb
****************************************************************/