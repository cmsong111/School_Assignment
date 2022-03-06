#include<stdio.h>
#include<math.h>

int is_prime(int a);

int main(void)
{	
	for (int i = 2; i < 100; i++) {
		if (is_prime(i)) {
			printf("%d ", i);
		}
	}

	return 0;
}

int is_prime(int a) {
	if (a == 2)
		return 1;
	for (int i = 2; i < (int)sqrt(a) + 1; i++) {
		if (a % i == 0) {
			return 0;
		}
	}
	return 1;
}