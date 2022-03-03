#include<stdio.h>

int main(void)
{
	int a,b,c;
	
	printf("정수 3개를 입력하시오 : ");
	scanf_s("%d %d %d", &a,&b,&c);
	printf("%d*%d-%d = %d",a,b,c,a*b-c);

	return 0;
}