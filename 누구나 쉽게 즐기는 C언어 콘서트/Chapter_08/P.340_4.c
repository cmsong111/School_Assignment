#include<stdio.h>
#include<math.h>

void get_divisor(int temp);

int main(void)
{	
	int x = 8;
	printf("%d의 약수: ",x);
	get_divisor(x);
	
	return 0;
}


void get_divisor(int temp) {
	for (int i = 1; i < temp+1; i++) {
		if (temp % i==0)
			printf("%d ", i);
	}
	return;
}s