#include<stdio.h>

int total = 0;

int save(int amount)
{
	total += amount;
	return 0;
}

int draw(int amount)
{
	total -= amount;
	return 0;
}

int main(void)
{
	int x;
	do
	{
		printf("얼마를 저축하시겠습니까?(종료는 -1):");
		scanf("%d", &x);

		if (x == -1)
			return 0;
		else if (x >= 0)
		{
			save(x);
			printf("%d", total);
		}
		else if (x <= 0)
		{
			draw(x);
			prinf("%d", total);
		}
	} while (1);
}

//(c)답은 전역 변수를 사용하여야 합니다.