#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x, y;

	printf("정수를 입력하시오:");
	scanf_s("%d", &x);
	printf("정수를 입력하시오:");
	scanf_s("%d", &y);

	printf("두수의 합은 %d입니다.\n두 수의 차는 %d입니다", x + y, abs(x - y));

	return 0;
}

