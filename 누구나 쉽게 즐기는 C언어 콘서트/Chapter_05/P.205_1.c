#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b, c;
	float x1, x2;

	printf("계수 A를 입력하시오:");
	scanf("%d", &a);
	printf("계수 B를 입력하시오:");
	scanf("%d", &b);
	printf("계수 C를 입력하시오:");
	scanf("%d", &c);

	x1 = (-b + sqrt(b*b - (4 * a * c))) / (2 * a);
	x2 = (-b - sqrt(b*b - (4 * a * c))) / (2 * a);

	if (a == 0)
		printf("위의 이차 방정식의 실근은 %d입니다." - c / b);
	else if (0 > (b * b) - (4 * a * c))
		printf("위의 이차 방적식의 해는 없습니다.");
	else
		printf("위의 이차 방적식의 실근은 %f과 %f 입니다.",x1,x2);

	return 0;
}