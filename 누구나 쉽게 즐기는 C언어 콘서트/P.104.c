#include<stdio.h>
int main(void)
{
	double light_speed = 300000;
	double distance = 149600000;

	double  time;

	time = distance / light_speed;
	time = time / 60.0;

	printf("���� �ӵ��� %f Km/s \n", light_speed);
	printf("�¾�� �������� �Ÿ� %f Km \n", distance);
	printf("���� �ð��� %f�� \n", time);
	return 0;
}