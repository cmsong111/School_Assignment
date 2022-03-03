#include<stdio.h>

int main(void)
{
	double a, b;
	printf("정수를 입력하시오");
	scanf("%lf", &a);

	b = (a*a*a - 20) / (a - 7);
	printf("수식의 값은 %lf 입니다.", b);
	return 0;
}