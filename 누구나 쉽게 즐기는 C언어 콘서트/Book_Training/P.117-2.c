#include<stdio.h>
#define pung	0.3025

int main(void)
{
	int m2;
	float puung;
	printf("면적을 제곱미터 단위로 입력하십시오: ");
	scanf("%d", &m2);
	puung = m2 * pung;
	printf("%d제곱미터는 %f평입니다.", m2, puung);
	return 0;
}