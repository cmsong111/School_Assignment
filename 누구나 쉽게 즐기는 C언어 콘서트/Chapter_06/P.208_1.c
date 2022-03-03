#include <stdio.h>
#include <time.h>

int main(void)
{
	int a, b, c;
	srand(time(NULL));

	while (1)
	{
		a = (rand() % 100);
		b = (rand() % 100);

		printf("산수 문제를 자동으로 출제합니다.\n%d + %d = ", a, b);
		scanf_s("%d", &c);

		if (a + b == c)
        {
			printf("맞았습니다.");
			break;
		}
		else
        {
			srand(time(NULL));
			printf("틀렸습니다.\n");
		}
	}

	return 0;
}