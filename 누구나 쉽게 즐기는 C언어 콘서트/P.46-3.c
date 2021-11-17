#include<stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	printf("여행은 몇박인가요:");
	scanf_s("%d", &a);
	printf("항공권 가격:");
	scanf_s("%d", &b);
	printf("호텔 1박 가격:");
	scanf_s("%d", &c);
	printf("하루에 필요한 용돈:");
	scanf_s("%d", &d);

	e = b + (a*c) + (a*d);
	printf("=======================\n");
	printf("총 여행 비용: %d\n", e);
	printf("=======================");
	return 0;
}