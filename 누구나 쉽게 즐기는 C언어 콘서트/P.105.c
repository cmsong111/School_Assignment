#include <stdio.h>

int main(void)
{
	double celsius, fahrenheit;

	printf("ȭ���µ�");
	scanf("%lf", &fahrenheit);
	celsius = (fahrenheit - 32)*5.0 / 9.0;
	printf("�����µ��� %lf �Դϴ�.", celsius);

	return 0;
}