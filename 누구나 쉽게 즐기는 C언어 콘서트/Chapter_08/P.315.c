#include<stdio.h>

float FtoC(double temp_C);

int main(void)
{	
	double C, F;
	F = 32;
	C = FtoC(F);
	printf("화씨온도 %f는 섭씨온도 %f도 입니다.", F, C);
	
	return 0;
}


float FtoC(double temp_C) {
	return (temp_C - 32) * 5 / 9;
}