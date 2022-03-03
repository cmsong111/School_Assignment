#include <stdio.h>
#include <time.h>

int main(void)
{
	int a, b, c = 1;
	srand(time(NULL));
	a = rand() % 100;

	while (1)
	{
		printf("정답을 추측하여 보시오:");
		scanf_s("%d", &b);

		if (a == b) {
			printf("축하합니다. 시도횟수=%d\n",c);
			break;
		}
		else if (a < b)
			printf("제시한 정수가 높습니다.\n");
		else if (a > b)
			printf("제시한 정수가 낮습니다.\n");
		c++;
	}


	return 0;
}