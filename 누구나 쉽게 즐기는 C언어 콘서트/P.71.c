#include <stdio.h>

int main(void)

{
	//변수 생성
	int r_a, r_s, r_m, r_d1, r_d2;
	int x, y;

	//변수 입력
	printf("숫자를 두개 입력하시오\n");
	scanf("%d%d", &x, &y);

	//계산
	r_a = x + y; 
	r_s = x - y;
	r_m = x * y;
	r_d1 = x / y;
	r_d2 = x % y;

	//계산값 출력
	printf("두수의 합 = %d \n", r_a);
	printf("두수의 차 = %d \n", r_s);
	printf("두수의 곱 = %d \n", r_m);
	printf("두수의 몫 = %d \n", r_d1);
	printf("두수의 나머지 = %d \n", r_d2);

	return 0;
}