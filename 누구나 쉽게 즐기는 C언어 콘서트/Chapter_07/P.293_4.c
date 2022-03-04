#include<stdio.h>

#define SIZE 10

int main(void)
{
	int arr[SIZE][SIZE] = { 0, };
	int x = 0, y = 0;

	for (int i = 0; i < 10; i++) {
		for (int ii = 0; ii < 10; ii++) {
			arr[i][ii] = i * ii;
		}
	}

	printf("알고싶은 구구단을 입력하시오(예: 9 3): ");
	scanf_s("%d%d", &x, &y);
	printf("%dX%d=%d", x, y, arr[x][y]);

	return 0;
}