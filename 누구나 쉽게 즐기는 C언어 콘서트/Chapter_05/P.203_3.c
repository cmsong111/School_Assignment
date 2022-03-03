#include<stdio.h>

int main(void)
{
	int x, y, z, r;

	printf("정수를 입력하시오:");
	scanf("%d", &x);
	printf("정수를 입력하시오:");
	scanf("%d", &y);
	
	z = (x > y) ? x : y;
	r = (x < y) ? x : y;

	printf("두수의 합은 %d입니다", x + y);
	printf("두 수의 차는 %d입니다", z - r);

	return 0;
}