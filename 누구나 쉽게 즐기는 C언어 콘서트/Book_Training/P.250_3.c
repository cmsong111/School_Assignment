#include <stdio.h>
int main(void)
{
	int a = 15;
	do
	{
		printf("%d ", a);
		a += 15;
	} while (a < 100);
	return 0;
}