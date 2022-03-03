#include<stdio.h>

int main(void)
{
	int a, b;
	printf("정수를 입력하시오: ");
	scanf("%d", &a);
	b = a % 2;

	if (b = 0)
		printf("짝수입니다");
	else
		printf("홀수입니다");

	return 0;
}