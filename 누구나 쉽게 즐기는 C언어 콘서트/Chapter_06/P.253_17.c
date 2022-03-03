#include<stdio.h>
#include<math.h>

int main(void)
{
	int a, aa;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &a);
	aa = sqrt(a) + 2;

	for (int i = 2; i < aa; i++)
	{
		if (a % i == 0)
		{
			printf("%d는 소수가 아닙니다.", a);
			exit(0);
		}
	}
	printf("%d는 소수가 맞습니다.", a);

	return 0;
}