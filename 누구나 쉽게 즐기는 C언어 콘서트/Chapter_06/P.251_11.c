#include <stdio.h>

int main(void)
{
	int x = 0;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &x);

	for (int i = 0; i < x; i++) {
		for (int ii = 0; ii < i+1; ii++)
			printf("%d ", ii+1);
		printf("\n");
	}
	return 0;
}