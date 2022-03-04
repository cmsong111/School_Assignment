#include<stdio.h>

#define SIZE 3

int main(void)
{
	int arr[SIZE][SIZE] = { {30,10,11},{40,90,32},{70,65,56} };
	int temp = 0;

	for (int i = 0; i < 3; i++) {
		for (int ii = 0; ii < 3; ii++) {
			temp += arr[i][ii];
		}
		printf("%d 학번의 평균점수는 %.2f점입니다.\n", i, temp / 3.0);
		temp = 0;
	}

	return 0;
}