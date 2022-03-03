#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a, b;
    printf("가위, 바위, 보 게임에 오신 것을 환영합니다.\n하나를 선택하세요 (가위-0, 바위-1, 보-2)\n사용자=");
    scanf_s("%d", &a);
    srand(time(NULL));
    b = rand() % 3;

    if (a == b)
        printf("비겼습니다.");
    else if (a == 0 && b == 1)
        printf("컴퓨터 승리");
    else if (a == 0 && b == 2)
        printf("사용자 승리");
    else if (a == 1 && b == 0)
        printf("사용자 승리");
    else if (a == 1 && b == 2)
        printf("컴퓨터 승리");    
    else if (a == 2 && b == 0)
        printf("컴퓨터 승리");
    else if (a == 2 && b == 2)
        printf("사용자 승리");

    return 0;
}