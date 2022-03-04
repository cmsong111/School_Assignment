#include<stdio.h>
#include<math.h>

int main(void)
{
	double arr[5] = { 0, }, temp, sum = 0, avg;

	for (int i = 0; i < 5; i++) {
		printf("실수를 입력하시오 ");
		scanf_s("%lf", &arr[i]);
		sum += arr[i];
	}
	avg = sum / 5.0;
	printf("평균: %lf\n", avg);

	sum = 0;

	for (int i = 0; i < 5; i++) {
		sum += pow(arr[i]- avg , 2);
	}

	printf("표준편차 : %lf\n", sqrt(sum / 5.0));

	return 0;
}