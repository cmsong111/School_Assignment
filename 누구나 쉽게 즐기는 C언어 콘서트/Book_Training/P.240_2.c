#include <stdio.h>

int main(void)
{
	int x, y;
	printf("중간 고사 점수를 입력하시오: ");
	scanf("%d", &x);
	printf("기말 고사 점수를 입력하시오: ");
	scanf("%d", &y);

	if (90 < (x + y) / 2)
		printf("당신의 학점은 A 입니다.");
	else if (80 < (x + y) / 2)
		printf("당신의 학점은 B 입니다.");
	else if (70 < (x + y) / 2)
		printf("당신의 학점은 C 입니다.");
	else if (60 < (x + y) / 2)
		printf("당신의 학점은 D 입니다.");
	else
		printf("당신의 학점은 F 입니다.");

	return 0;
}