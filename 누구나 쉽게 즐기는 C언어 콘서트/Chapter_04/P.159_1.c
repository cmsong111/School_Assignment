#include<stdio.h>
#include<math.h>
int main(void)
{
	int x1, y1, x2, y2;
	float x, y, z;
	printf("첫번째 점 (x1 y1): ");
	scanf("%d %d", &x1, &y1);
	printf("두번째 점 (x1 y1) : ");
	scanf("%d %d", &x2, &y2);

	x = x2 - x1;
	y = y2 - y1;

	z = sqrt((x*x)+(y*y));

	printf("두 점의 거리는 %f입니다.", z);
	return 0;
}