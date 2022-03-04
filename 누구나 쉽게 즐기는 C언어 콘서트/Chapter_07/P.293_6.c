#include<stdio.h>
#include<time.h>

#define SIZE 6

int main(void)
{
	int arr[SIZE] = { 0, };
	int temp = 0, max = 0;
	srand(time(NULL));
	for (int i = 0; i < 60000; i++) {
		temp = rand() % 6;
		arr[temp]++;
	}
	for (int i = 0; i < 6; i++) {
		if (max < arr[i])
			max = i;
	}

	printf("===================\n");
	printf("주시위\t빈도\n");
	printf("===================\n");
	for (int i = 0; i < 6; i++) {
		printf("  %d\t%d\n", i + 1, arr[i]);
	}

	return 0;
}