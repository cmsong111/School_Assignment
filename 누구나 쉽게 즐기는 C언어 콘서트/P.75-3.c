#include <stdio.h>

int main(void)
{
	int a, b, c;
	int d;

	
	printf("ù ��° ���ڸ� �Է��Ͻÿ�:");
	scanf_s("%d", &a);
	printf("�� ��° ���ڸ� �Է��Ͻÿ�:");
	scanf_s("%d", &b);
	printf("�� ��° ���ڸ� �Է��Ͻÿ�:");
	scanf_s("%d", &c);


	d = (a + b + c) / 3;

	
	printf("�� ���� �����: %d", d);

	return 0;
}