#include <stdio.h>

int main(void)

{
	//���� ����
	int r_a, r_s, r_m, r_d1, r_d2;
	int x, y;

	//���� �Է�
	printf("���ڸ� �ΰ� �Է��Ͻÿ�\n");
	scanf("%d%d", &x, &y);

	//���
	r_a = x + y; 
	r_s = x - y;
	r_m = x * y;
	r_d1 = x / y;
	r_d2 = x % y;

	//��갪 ���
	printf("�μ��� �� = %d \n", r_a);
	printf("�μ��� �� = %d \n", r_s);
	printf("�μ��� �� = %d \n", r_m);
	printf("�μ��� �� = %d \n", r_d1);
	printf("�μ��� ������ = %d \n", r_d2);

	return 0;
}