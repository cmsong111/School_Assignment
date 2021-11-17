#include <stdio.h>

int main(void)
{
	double celsius, fahrenheit;

	printf("È­¾¾¿Âµµ");
	scanf("%lf", &fahrenheit);
	celsius = (fahrenheit - 32)*5.0 / 9.0;
	printf("¼·¾¾¿Âµµ´Â %lf ÀÔ´Ï´Ù.", celsius);

	return 0;
}