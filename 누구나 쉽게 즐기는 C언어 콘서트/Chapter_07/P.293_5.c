#include<stdio.h>
#include<time.h>

#define SIZE 10

int main(void)
{
	int arr[SIZE] = { 0, };
	int temp = 0, max = 0;
	srand(time(NULL));
	for (int i = 0; i < 100; i++) {
		
		temp = rand() % 10;
		arr[temp]++;
	}
	for (int i = 0; i < 10; i++) {
		if (max < arr[i])
			max = i;
	}

	printf("가장 많이 생선된 수: %d", max);
	return 0;
}