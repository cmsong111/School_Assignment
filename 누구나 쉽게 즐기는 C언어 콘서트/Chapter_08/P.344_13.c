#include <stdio.h>

int pow(int x);

int main(void)
{
	int x;
	printf("정수를 입력하시오: ");
	scanf("%d", &x);

	x = pow(x);
	printf("%d", x);

	return 0;
}

int pow(int x)
{
	static int sum = 0;

	if (x == 0)
	{
		return sum;
	}
	sum += x * x * x;

	pow(x - 1);
}