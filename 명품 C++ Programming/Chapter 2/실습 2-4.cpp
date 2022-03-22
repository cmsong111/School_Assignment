#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void) {
	
	float arr[5];

	cout << "5 개의 실수를 입력하라 >>";
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
	

	float big = arr[0];
	for (int i = 0; i < 5; i++) {
		if (big < arr[i]) {
			big = arr[i];
		}
	}
	cout << "제일 큰 수 = " << big;

	return 0;
}
