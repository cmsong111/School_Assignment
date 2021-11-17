#include <stdio.h>
#define EXCHAGE_RATE	1120

int main(void)
{
	int usd, krw;
	
	printf("달러 금액을 입력하십시오\n");
	scanf("%d", &usd);

	krw = usd * EXCHAGE_RATE;
	printf("%d 달러의 원화가격은 %d원 입니다.", usd, krw);

	return 0;
}