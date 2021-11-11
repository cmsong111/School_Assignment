#include<stdio.h>
int main(void)
{
	int x, y, r ,z= 0;
	printf("시작정수: ");
	scanf("%d", &x);
	r = x;
	printf("종료정수: ");
	scanf("%d", &y);
	for (; x < y; x++)
	{
		z += x;
	}
	printf("Sum of %d to %d = %d", r, y, z+x);

	return 0;
}