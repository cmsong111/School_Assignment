#include<stdio.h>
#define PI	3.141592
int main(void)
{
	double radius, area;
	printf("원의 반지름을 입력하십시오\n");
	scanf("%lf", &radius);
	area = radius * radius*PI;
	printf("원의 넓이는 %f 입니다", area);
	return 0;
}