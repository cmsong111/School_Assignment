#include<stdio.h>
#include<time.h>

int main(void)
{
	char arr[10] = { '_','_','_','_','_','*','_','_','_','_' };
	int direction, location = 5;

	srand(time(NULL));

	while (1) {
		for (int i = 0; i < 10; i++) {
			printf("%c ", arr[i]);
		}
		printf("\n");
		
		direction = rand() % 2;

		if (direction == 0) {
			if (arr[0] != '*') {
				arr[location] = '_';
				arr[location - 1] = '*';
				location--;
			}
		}
		else if (direction == 1) {
			if (arr[9] != '*') {
				arr[location] = '_';
				arr[location + 1] = '*';
				location++;
			}
		}
		getch();
	}
	return 0;
}