#include<stdio.h>
#define PI	3.141592
int main(void)
{
	double radius, area;
	printf("���� �������� �Է��Ͻʽÿ�\n");
	scanf("%lf", &radius);
	area = radius * radius*PI;
	printf("���� ���̴� %f �Դϴ�", area);
	return 0;
}