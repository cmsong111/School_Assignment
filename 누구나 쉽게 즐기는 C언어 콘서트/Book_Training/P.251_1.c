//사용자가 입력한 정수의 모든 약수를 출력하는 프로그램
#include<stdio.h>

int main(void)
{
	//변수 선언
	int a,i;

	//입력부
	printf("정수를 입력하시오: ");
	scanf("%d", &a);

	//구현부
	/*사용자가 정수를 입력했을 때
	나누는 정수를 1씩 늘려가며 나머지가
	0일 때 사용자가 입력한 정수의 약수이다.*/
	for (i = 1; i <= a; i++)
	{
		if (a%i == 0)
			printf("%d ", i);
	}
	return 0;
}