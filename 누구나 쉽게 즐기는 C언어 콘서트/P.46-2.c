#include<stdio.h>

int main(void)

{
	int a;
	int b;
	int c;

	printf("첫 번째 숫자를 입력하시오:");
	scanf_s("%d", &a);
	printf("두 번째 숫자를 입력하시오:");
	scanf_s("%d", &b);
	
	c = b + a;

	printf("두수의 합= %d \n", c);
	return 0;
}