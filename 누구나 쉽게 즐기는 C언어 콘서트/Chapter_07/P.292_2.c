#include<stdio.h>

#define SIZE 5

int main(void)
{
	int arr[SIZE] = { 0, };
	int max, min;

	for (int i = 0; i < 5; i++) {
		printf("정수를 입력하시오: ");
		scanf_s("%d", &arr[i]);
	}

	max = min = arr[0];

	for (int i = 0; i < 5; i++) {
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}

	printf("최대값=%d 최소값=%d", max, min);

	return 0;
}