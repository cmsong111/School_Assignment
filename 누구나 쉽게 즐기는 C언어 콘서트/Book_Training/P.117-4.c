#include <stdio.h>

int main(void)
{
	printf("문자를 입력하시오: ");
	char a;
	scanf("%c", &a);
	printf("%c의 아스키 코드는 %d입니다", a, a);
	return 0;
}