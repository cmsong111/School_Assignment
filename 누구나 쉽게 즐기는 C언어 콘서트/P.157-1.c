#include<stdio.h>

int main(void)
{
	int a, b, c, d;
	printf("첫번째 정수를 입력하시오 : ");
	scanf("%d", &a);
	printf("두번째 정수를 입력하시오 : ");
	scanf("%d", &b);

	c = a / b;
	d = a % b;

	printf("몫은 %d 이고 나머지는 %d 입니다.", c, d);
	
	return 0;
}