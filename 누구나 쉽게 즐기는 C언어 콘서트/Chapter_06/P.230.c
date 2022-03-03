#include <stdio.h>

int main(void) {

    int x = 0;

    for (int i = 1; i <= 10; i++) {
        x += i;
    }

    printf("1부터 10까지의 정수의 합= %d\n", x);

    return 0;
}