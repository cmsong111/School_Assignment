#include<stdio.h>

int main(void)
{
	int i = 0;
	char x;

	printf("문자를 입력하시오 :");
	scanf_s("%c", &x);

	if (x == 'a') //a의 아스키코드가 97
	{
		i++;
	}

	while(1)
	{
		getchar();
		printf("문자를 입력하시오: (종료.) ");
		scanf_s("%c", &x);

		if (x == 'a')
		{
			i++;
		}
		else if (x == 46)
		{
			break;
		}
	}
	printf("a의 개수=%d", i);

	return 0;
}