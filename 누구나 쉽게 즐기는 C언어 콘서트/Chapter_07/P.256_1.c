#include<stdio.h>
#define SIZE 10

int main(void)
{
	int prices[SIZE] = { 12,3,19,6,18,8,12,4,1,19 }, min = prices[0];

	printf("[ ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", prices[i]);
	}
	printf("]\n");

	for (int i = 0; i < 10; i++) 
		if (min > prices[i])
			min = prices[i];
	
	printf("최소값은 %d 입니다.", min);

	return 0;
}