#include <stdio.h>

int main(void)
{
	long long int property;
	long long int saving;

	printf("매달 저축 금액을 입력하십시오: ");
	scanf("%lld", &saving);

	property = saving * 12 * 30;

	printf("30년 후의 재산 = %lld원 \n", property);
	return 0;
}