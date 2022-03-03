#include <stdio.h>

int main(void)
{
	int a, x, i;

	for (x = 1; x <= 10; x++)
	{
		printf("데이터를 입력하시오: ");
		scanf_s("%d", &a);

		for (i = 1; i <= a; i++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}