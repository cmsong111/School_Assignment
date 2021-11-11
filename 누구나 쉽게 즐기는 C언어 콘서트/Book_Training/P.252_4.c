#include <stdio.h>

int main(void)
{
	int n, i;
	int sum = 0;

	printf("n값을 입력하시오: ");
	scanf("%d", &n);


	for (i = 1; i <= n; i++)
	{
		sum += (i * i);
	}
	printf("계산값은 %d 입니다.", sum);
	return 0;
}