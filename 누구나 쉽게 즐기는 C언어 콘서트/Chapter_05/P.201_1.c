#include <stdio.h>

int main(void)
{
	int x;

	printf("과세표준을 입력하시오(만원): ");
	scanf("%d", &x);

	if (x > 8000)
		printf("소득세는 %d만원 입니다.", x * 35 / 100);
	else if (x > 4000)
		printf("소득세는 %d만원 입니다.", x * 26 / 100);
	else if (x > 1000)
		printf("소득세는 %d만원 입니다.", x * 17 / 100);
	else
		printf("소득세는 %d만원 입니다.", x * 8 / 100);

	return 0;
}