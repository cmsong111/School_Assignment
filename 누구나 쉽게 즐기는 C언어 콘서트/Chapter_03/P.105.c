#include <stdio.h>

int main(void)
{
	double celsius, fahrenheit;

	printf("화씨온도");
	scanf("%lf", &fahrenheit);
	celsius = (fahrenheit - 32)*5.0 / 9.0;
	printf("섭씨온도는 %lf 입니다.", celsius);

	return 0;
}