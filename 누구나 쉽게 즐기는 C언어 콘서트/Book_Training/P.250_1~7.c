#include<stdio.h>

int main(void)
{
	int i, r;

	for (i = 1; i <= 7; i++)
	{
		printf("*******\r");
		for (r = 1; r <= i; r++)
		{
			printf("%d", r);
		}
		printf("\n");
	}

	return 0;
}