#include<stdio.h>
#define SIZE 16

int main(void)
{
	int att_book[SIZE] = { 0, };
	int sum = 0;
	float ratio = 0;

	for (int i = 0; i < SIZE; i++) {
		printf("%d번째 강의에 출석하셧나요?(출석은 1, 결석은 0): ", i + 1);
		scanf_s("%d", &att_book[i]);
	}
	for (int i = 0; i < SIZE; i++) {
		if (att_book[i] == 0)
			sum++;
	}
	ratio = sum / 16.0;

	if (ratio > 0.3) {
		printf("수업 일수 부족입니다. <%f%%>\n", ratio*100);
	}
	return 0;
}