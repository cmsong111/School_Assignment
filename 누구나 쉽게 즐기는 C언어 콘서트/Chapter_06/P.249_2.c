#include <stdio.h>

int main(void)
{
	int a;
	printf("몇번이나 반복할까요?: ");
	scanf_s("%d", &a);
	for (int i = 0; i < a; i++) {
		printf("안녕하세요\n");
	}
	return 0;
}
