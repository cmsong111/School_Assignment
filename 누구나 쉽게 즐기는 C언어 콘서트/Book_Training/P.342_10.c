#include <stdio.h>

int ans;

int cal(int x, int y, char z);


int main(void)
{
	int x, y;
	char z;
	do
	{
		printf("연산을 입력하시오(종료는 ctrl+c):"); //강제종료
		scanf("%d%c%d", &x, &z, &y);
		cal(x, y, z);
		printf("연산 결과: %d%c%d=%d\n", x, z, y, ans);
	} while (1);
}

int cal(int x, int y, char z)
{

	static int a1 = 1, a2 = 1, a3 = 1, a4 = 1;
	switch (z)
	{
	case '+':
		ans = x + y;
		printf("덧셈은 총 %d번 호출되었습니다\n", a1++);
		break;
	case '-':
		ans = x - y;
		printf("뺄셈은 총 %d번 호출되었습니다\n", a2++);
		break;
	case '/':
		ans = x / y;
		printf("나눗셈은 총 %d번 호출되었습니다\n", a3++);
		break;
	case '*':
		ans = x * y;
		printf("곱셈은 총 %d번 호출되었습니다\n", a4++);
		break;
	default:
		break;
	}
	return 0;
}