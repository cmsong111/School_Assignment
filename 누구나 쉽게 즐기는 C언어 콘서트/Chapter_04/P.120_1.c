#include<stdio.h>

int main(void)
{
	int a = 0, b = 0;
	printf("투입한 돈: ");
	scanf_s("%d",&a);
	printf("물건값: ");
	scanf_s("%d",&b);
	printf("거스름돈: %d",a-b);
	
	printf("\n\n100원 동전의 개수: %d", (a-b)/100 );

	printf("\n10원 동전의 개수: %d", ((a-b)%100)/10);

	
	return 0;
}