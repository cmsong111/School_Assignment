#include<stdio.h>

int main(void)
{
	char collor;

	printf("신호등의 색깔 입력(R, G, Y): ");
	collor = getchar();

	if (collor == 'R' || collor == 'r')
		printf("정지");
	else if (collor == 'G' || collor == 'g')
		printf("진행");
	else if (collor == 'Y' || collor == 'y')
		printf("주의");
	else
		printf("Error");

	return 0;
}