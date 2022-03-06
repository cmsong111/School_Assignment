#include<stdio.h>

float f(float x, float y);

int main(void)
{	
	float x, y, result;
	x = 1.0;
	y = 1.0;
	printf("x=%.2f, y=%.2f, f(x,y)=%f\n", x, y, f(x, y));

	x = 2.0;
	y = 1.0;
	printf("x=%.2f, y=%.2f, f(x,y)=%f\n", x, y, f(x, y));

	x = 1.0;
	y = 2.0;
	printf("x=%.2f, y=%.2f, f(x,y)=%f\n", x, y, f(x, y));


	return 0;
}


float f(float x, float y) {
	return (1.5*x+3.0*y);
}