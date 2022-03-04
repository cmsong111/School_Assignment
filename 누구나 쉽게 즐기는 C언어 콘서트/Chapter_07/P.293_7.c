#include<stdio.h>

#define SIZE 10

int main(void)
{
	int arr[SIZE] = { 0, };
	int temp = 0;
	char TF;
	
	while (1) {
		printf("좌석을 예약하시겠습니까?(y 또는n): ");
		scanf_s("%c", &TF);
		if (TF == 'n')
			break;
		else if (TF == 'y') {
			printf("\n------------------\n");
			printf("1 2 3 4 5 6 7 8 9\n");
			printf("------------------\n");
			for (int i = 0; i < 9; i++) {
				printf("%d ", arr[i]);
			}
			printf("\n몇번째 좌석을 예약하시겠습니까 ");
			scanf_s("%d", &temp);

			if (arr[temp-1] == 1)
				printf("이미 예약된 좌석입니다.\n");
			else {
				arr[temp-1] = 1;
				printf("예약되었습니다.\n ");
			}
		}
		getchar();
	}

	return 0;
}