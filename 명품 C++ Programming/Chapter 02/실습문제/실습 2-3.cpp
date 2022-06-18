#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void) {
	int a, b, big;

	cout << "두 수를 입력하라>>";

	cin >> a >> b;
	big = (a > b) ? a : b;
	cout << "큰수 = " << big << endl;

	return 0;
}
