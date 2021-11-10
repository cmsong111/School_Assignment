#include <stdio.h>
int main(void)
{
	int a = 3;
	do
	{
		printf("%d ", a);
		a += 3;
	} while (a < 100);
	return 0;
}