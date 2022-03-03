#include <stdio.h>

int main(void)
{
	double celsius, fahrenheit;

	printf("화씨온도=");
	scanf_s("%lf", &fahrenheit);
	celsius = (fahrenheit - 32) * 5.0 / 9.0;
	printf("섭씨온도=%f", celsius);

	return 0;
}
