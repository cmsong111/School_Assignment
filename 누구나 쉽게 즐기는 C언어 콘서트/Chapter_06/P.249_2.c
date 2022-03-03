#include <stdio.h>

int main(void)
{
	int a = 0, b;
	printf("몇번이나 반복할까요?: ");
	scanf("%d", &b);
	while (a < b)
	{
		printf("안녕하세요\n");
		a++;

	}
	return 0;
}
