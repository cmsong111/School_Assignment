#include <stdio.h>

int print_array(int *a)
{
	int i;
	
	for (i = 0; i < 4; i++)
		a++;
	for (i = 0; i < 5; i++)
		printf("%d ", *a--);

	return 0;
}

int main(void)
{
	int a[5] = { 0 };
	printf("5개의 정수를 입력하시오: ");
	scanf("%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4]);
	print_array(&a);

	return 0;
}