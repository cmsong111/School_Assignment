#include <stdio.h>

int main(void)
{
	//���� ����
	int p_hotel, p_airplane, p_day, p_pocket;
	int sum;
	//���� �Է�
	printf("�������� ȣ�ڰ��� ����Ⱑ�� �Ϸ�뵷 �ݾ��� ���ʴ�� �����ּ���\n");
	printf("Ex) 3 50000 100000 50000\n");
	scanf("%d%d%d%d", &p_day, &p_hotel, &p_airplane, &p_pocket);
	//�Է� Ȯ��
	printf("�������ڴ� %d\n", p_day);
	printf("ȣ�� ������%d\n", p_hotel);
	printf("����� �����%d\n", p_airplane);
	printf("�Ϸ� �뵷�� %d\n", p_pocket);
	//����Ȯ��
	sum = p_day * (p_hotel + p_pocket) + p_airplane;
	//�� ������ �� Ȯ��
	printf("�� ������� %d�Դϴ�", sum);


	return 0;
}