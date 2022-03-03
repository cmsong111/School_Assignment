#include <stdio.h>

int main(void) {

    int x, y, z;

    printf("두개의 정수를 입력하십시오 (큰수, 작은수): ");
    scanf_s("%d %d", &x, &y);

    //유클리드 호제법
    while (y != 0) {
        z = x % y;
        x = y;
        y = z;
    }

    printf("최대 공약수는 %d입니다.\n", x);

    return 0;
}