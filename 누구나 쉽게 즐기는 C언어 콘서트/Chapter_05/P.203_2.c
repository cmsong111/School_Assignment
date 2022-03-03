#include<stdio.h>

int main(void)
{
	char collor;
	
	printf("신호등의 색깔 입력: ");
	collor = getchar();
	
	if (collor == 'R')
		printf("정지");
	else if (collor == 'G')
		printf("진행");
	else if (collor == 'Y')
		printf("주의");
	else
		printf("다른거");
	return 0;
}