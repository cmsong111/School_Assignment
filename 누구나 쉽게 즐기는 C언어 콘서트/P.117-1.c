#include<stdio.h>
int main(void)
{
	double a;
	printf("실수를 입력하시오: ");
	scanf("%lf", &a);
	printf("지수 형식으로는 %e 입니다", a);
	return 0;
}