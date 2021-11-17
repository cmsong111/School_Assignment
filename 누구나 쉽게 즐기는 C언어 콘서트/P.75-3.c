#include <stdio.h>

int main(void)
{
	int a, b, c;
	int d;

	
	printf("첫 번째 숫자를 입력하시오:");
	scanf_s("%d", &a);
	printf("두 번째 숫자를 입력하시오:");
	scanf_s("%d", &b);
	printf("세 번째 숫자를 입력하시오:");
	scanf_s("%d", &c);


	d = (a + b + c) / 3;

	
	printf("세 수의 평균은: %d", d);

	return 0;
}