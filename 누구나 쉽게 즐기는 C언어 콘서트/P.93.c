#include <stdio.h>
#define EXCHAGE_RATE	1120

int main(void)
{
	int usd, krw;
	
	printf("�޷� �ݾ��� �Է��Ͻʽÿ�\n");
	scanf("%d", &usd);

	krw = usd * EXCHAGE_RATE;
	printf("%d �޷��� ��ȭ������ %d�� �Դϴ�.", usd, krw);

	return 0;
}