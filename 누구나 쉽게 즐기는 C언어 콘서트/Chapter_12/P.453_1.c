#include <stdio.h>

int get_array_sum(int *a, int size)
{
	int i, sum = 0;
	for (i = 0; i <= size; i++)
		sum += *a++;

	return (sum);
}


int main(void)
{
	int i, array[10] = { 1,2,3,4,5,6,7,8,9 };
	printf("print array()\n");
	for (i = 0; i <= 9; i++)
		printf("%d ", array[i]);
	printf("\n배열 요소의 합 = %d", get_array_sum(&array, 9));

	return 0;
}