#include <stdio.h>

int main(void){
    int money, candy_price;

    printf("현재 가지고 있는 돈: ");
    scanf_s("%d",&money);

    printf("캔디의 가격: ");
    scanf_s("%d",&candy_price);

    printf("최대로 살 수 있는 캔디의 개수 = %d\n", money/ candy_price);
    printf("사탕을 구매하고 남은 돈 = %d\n", money % candy_price);
    return 0;
}