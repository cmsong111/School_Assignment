#include <stdio.h>

int main(void)
{
	int temp = 0;
	int sum = 0;

	for(int i = 0; i < 3; i++){
		printf("정수를 입력하시오:");
		scanf_s("%d", &temp);
		sum += temp;
	}
	
	printf("평균은 %d입니다.", sum/3);

	return 0;
}