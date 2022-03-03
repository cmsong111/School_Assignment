#include<stdio.h>

int main(void)
{
	int a, b = 0;
	do
	{
		printf("정수를 입력하시오 :");
		scanf_s("%d", &a);
		b += a;
	} while (a != 0);

	printf("합계 = %d", b);

	return 0;
}