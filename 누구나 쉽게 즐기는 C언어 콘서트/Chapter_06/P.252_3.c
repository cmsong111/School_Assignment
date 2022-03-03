//피보나치 수열
#include<stdio.h>

int main(void)
{
	//변수선언
	int a, b, c, r, i = 0; /*abc는 숫자,r은 사용자 입력함수,i는 함수를 위한 수*/
	
	//입력부
	printf("몇번째 항까지 구할까요?: ");
	scanf("%d", &r);
	
	printf("0 1 ");
	a = 0; /*첫번째 항*/
	b = 1;/*두번째 항*/
	r -= 2; /*항이 이미 2개가 나왔으므로 2개는 뺀다*/
	do  /*앞의 두수를 무한히 더하는 방법은 a+b=c c+b=a b+a=c식으로 무한이 반복한다*/
	{
		c = a + b;
		printf("%d ", c);
		i++;
		if (i == r)
			break;

		a = b + c;
		printf("%d ", a);
		i++;
		if (i == r)
			break;

		b = a + c;
		printf("%d ", b);
		i++;
		if (i == r)
			break;

	} while (i != r);

	return 0;
}