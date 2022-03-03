#include<stdio.h>

int main(void)
{
	int a, b;
	printf("첫번째 정수를 입력하시오 : ");
	scanf_s("%d", &a);
	printf("두번째 정수를 입력하시오 : ");
	scanf_s("%d", &b);


	printf("몫은 %d 이고 나머지는 %d 입니다.", a / b, a % b);

	return 0;
}