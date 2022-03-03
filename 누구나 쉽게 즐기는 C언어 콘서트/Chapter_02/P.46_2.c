#include<stdio.h>

int main(void)

{
	int a = 0;
	int b = 0;

	printf("첫 번째 숫자를 입력하시오:");
	scanf("%d", &a);
	printf("두 번째 숫자를 입력하시오:");
	scanf("%d", &b);

	printf("두수의 합= %d \n", b + a);
	return 0;
}