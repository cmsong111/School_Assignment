#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int monte(int x)
{
	int a;
	srand(time(NULL));
	a = rand() % 1;
	
	if (a == x)
	{
		printf("컴퓨터가 이겼습니다.\n");
		return 0;
	}
	else if(x==-1)
	{
		return 1;
	}
	else
	{
		printf("사용자가 이겼습니다.\n");
		return 0;
	}
}

int main(void)
{
	int x,a;
	do
	{
		printf("앞(0) 또는 뒤(1)를 선택하시오(종료는 -1):");
		scanf("%d", &x);
		getchar();
		a=monte(x);
	} while (a != 1);
		
}