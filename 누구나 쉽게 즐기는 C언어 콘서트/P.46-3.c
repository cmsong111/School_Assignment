#include<stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	printf("������ ����ΰ���:");
	scanf_s("%d", &a);
	printf("�װ��� ����:");
	scanf_s("%d", &b);
	printf("ȣ�� 1�� ����:");
	scanf_s("%d", &c);
	printf("�Ϸ翡 �ʿ��� �뵷:");
	scanf_s("%d", &d);

	e = b + (a*c) + (a*d);
	printf("=======================\n");
	printf("�� ���� ���: %d\n", e);
	printf("=======================");
	return 0;
}