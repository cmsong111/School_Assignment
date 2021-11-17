#include <stdio.h>
int main(void)
{
	float fvalue = 1234567890.1234567890123456789;
	double dvalue = 1234567890.123457890123456789;
	printf("flaoat형 변수 = %30.25f\n", fvalue);
	printf("double형 변수 = %30.25f\n", dvalue);
	return 0;
}