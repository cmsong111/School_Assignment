
#include<stdio.h>

double get_bigger(double a, double b);

int main(void)
{	
	double a, b;
	printf("실수를 입력하시오: ");
	scanf_s("%lf", &a);
	printf("실수를 입력하시오: ");
	scanf_s("%lf", &b);
	
	printf("더 큰수는 %lf입니다.", get_bigger(a, b));

	return 0;
}


double get_bigger(double a, double b) {
	if (a < b)
		return b;
	else
		return a;
}