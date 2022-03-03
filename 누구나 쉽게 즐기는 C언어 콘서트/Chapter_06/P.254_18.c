#include<stdio.h>
#include<time.h>

int main(void)
{
	int first = 50, target = 250, bets = 0, victory = 0, defeat = 0;

	printf("초기 금액 $%d\n", first);
	printf("목표 금액 $%d\n", target);

	for (int i = 0; i < 1000; i++) {
		bets++;
		//srand(time(NULL));
		
		if (rand() % 2 == 0) {
			victory++;
			first++;
		}
		else {
			defeat++;
			first--;
		}

		if (first == target || first == 0) {
			break;
		}
	}

	printf("1000번중의 %d번 승리\n", victory);
	printf("이긴 확률 =  %f%%\n", (float)victory/(float)bets*100);
	printf("평균 베팅 횟수 = %d", bets);
	
	return 0;
}