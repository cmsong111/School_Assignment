#include<stdio.h>
int main(void)
{
	double light_speed = 300000;
	double distance = 149600000;

	double  time;

	time = distance / light_speed;
	time = time / 60.0;

	printf("빛의 속도는 %f Km/s \n", light_speed);
	printf("태양과 지구와의 거리 %f Km \n", distance);
	printf("도달 시간은 %f분 \n", time);
	return 0;
}