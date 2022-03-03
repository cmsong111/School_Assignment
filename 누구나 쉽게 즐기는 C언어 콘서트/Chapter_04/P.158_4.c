#include<stdio.h>

int main(void)
{
	int number;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &number);

	printf("백의 자리수: %d\n", number / 100);
	printf("십의 자리수: %d\n", number % 100 / 10);
	printf("일의 자리수: %d\n", number % 10 / 1);


	return 0;
}