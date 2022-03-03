#include<stdio.h>

int main(void)
{
	int a=1000, b;
	printf("초기 연료량: 1000");

	do
	{
		printf("연료 충전은 +, 소모는 -로 입력하주세요: ");
		scanf("%d", &b);
		a += b;
		printf("현재 남아있는 양은 %d 입니다.\n",a);

		if (a <= 100)
			printf("(경고) 연로가 100 이하입니다.");
	} while (a > 100);

	return 0;
}