#include <stdio.h>
int main(void)
{
	float a, b;
	int c;
	printf("2개의 실수를 입력하시오 : ");
	scanf("%f %f", &a, &b);
	c = a + b;
	printf("합의 정수부 = %d", c);

	return 0;
}