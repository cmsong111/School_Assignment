#include<stdio.h>

int main(void)
{
	int i = 0;
	char x;
	
	printf("문자를 입력하시오 :");
	scanf("%c", &x);

	if (x == 'a') //a의 아스키코드가 97
	{
		i++;
	}

	do
	{
		printf("문자를 입력하시오: (종료.) ");
		scanf("%c", &x);
		if (x == '.')
		{
			i++;
		}
		else if (x == 10)
		{
			;
		}

	} while (x != 46); //false 값이 .의 아스키코드인 46

	printf("a의 개수=%d", i);

	return 0;
}