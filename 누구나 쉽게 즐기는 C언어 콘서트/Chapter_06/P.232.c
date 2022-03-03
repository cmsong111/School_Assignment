#include <stdio.h>

int main(void) {

    int x = 0;
    long fact = 1;

    printf("정수를 입력하시오: ");
    scanf_s("%d", &x);

    for (int i = 1; i <= x; i++) {
        fact = fact * i;
    }

    printf("%d!은 %d입니다.\n", x, fact);

    return 0;
}