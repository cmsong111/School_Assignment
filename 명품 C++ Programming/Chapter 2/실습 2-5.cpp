#include <iostream>

using namespace std;

int main(void)
{

	char arr[101];
	cout << "문자들을 입력하라(100개 미만)." << endl;

	cin.getline(arr, 101, '\n');

	int score = 0;
	for (int i = 0; i < 101; i++)
	{
		if (arr[i] == 'x')
		{
			score++;
		}
	}
	cout << "x의 개수는" << score;

	return 0;
}
