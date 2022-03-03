#include<stdio.h>

int main(void)
{
	int x;

	printf("과세 표준을 입력하시오(만원): ");
	scanf_s("%d", &x);

	if (x <= 1000)
		printf("소득세는 %.0f만원입니다", x * 0.08);
	else if (x <= 4000)
		printf("소득세는 %.0f만원입니다", x * 0.17);
	else if (x <= 8000)
		printf("소득세는 %.0f만원입니다", x * 0.26);
	else
		printf("소득세는 %.0f만원입니다", x * 0.35);

	return 0;
}