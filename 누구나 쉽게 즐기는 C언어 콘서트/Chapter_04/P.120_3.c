#include<stdio.h>
#include<math.h>

int main(void)
{
	int year = 382;
	float interest = 0.06, moeny = 24;
	for (int i = 0; i < year; i++) {
		moeny += moeny * interest;
	}
	printf("%f", moeny);


	return 0;
}