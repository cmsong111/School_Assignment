#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, i;

	printf("정수를 입력하시오: ");
	scanf("%d", &a);

	for (i = 2; i < a; i++)
	{
		if (a%i == 0)
		{
			printf("%d는 소수가 아닙니다.", a);
			exit(0);
		}
	}
	printf("%d는 소수가 맞습니다.", a);

	return 0;
}