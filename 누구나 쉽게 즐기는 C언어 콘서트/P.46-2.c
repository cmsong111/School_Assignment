#include<stdio.h>

int main(void)

{
	int a;
	int b;
	int c;

	printf("ù ��° ���ڸ� �Է��Ͻÿ�:");
	scanf_s("%d", &a);
	printf("�� ��° ���ڸ� �Է��Ͻÿ�:");
	scanf_s("%d", &b);
	
	c = b + a;

	printf("�μ��� ��= %d \n", c);
	return 0;
}