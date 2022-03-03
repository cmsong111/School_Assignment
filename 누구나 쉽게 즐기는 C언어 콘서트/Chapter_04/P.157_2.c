#include<stdio.h>

int main(void)
{
	int a;
	printf("첫번째 정수를 입력하시오 : ");
	scanf_s("%d", &a);
	printf("세제곱값은 %d*%d*%d = %d입니다.",a,a,a,a*a*a);


	return 0;
}