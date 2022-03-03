#include <stdio.h>
#include <math.h>

int cal(int a, int b, int c, double * xplus, double* xminus);

int main(void)
{
	int x=0, y=0;//결과값
	int a=3, b=2, c=1;//상수
	
	cal(a, b, c, &x, &y);

	printf("%d\n%d", x, y);
}

int cal(int a, int b, int c, double *xplus, double *xminus)
{
	*xminus = (-b - sqrt(b*b - 4 * a*c)) / (2 / a);
	*xplus = (-b + sqrt(b*b - 4 * a*c)) / (2 / a);
	return 0;
}