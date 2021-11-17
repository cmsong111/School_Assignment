#include <stdio.h>


int main()
{
	int number;
	int hun, ten, one;

	printf("3자리 숫자를 입력하시오: ");
	scanf("%d", &number);

	hun = number / 100;
	ten = (number - hun * 100) / 10;
	one = (number - hun * 100 - ten * 10);

	printf("100의 자리 숫자는 %d\n 10의 자리는 %d\n 1의 자리는 %d", hun, ten, one);



	return 0;
}