#include<stdio.h>

int main(void)
{
	int a;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &a);

	if (a % 2 == 0)
		printf("짝수입니다");
	else
		printf("홀수입니다");

	return 0;
}