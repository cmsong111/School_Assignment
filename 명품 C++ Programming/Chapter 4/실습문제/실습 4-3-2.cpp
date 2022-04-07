#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	int cnt = 0, ind = 0;

	cout << "문자열 입력>>";
	getline(cin, str);

	while (true) {
		ind = str.find('a', ind+1);
		if (ind == -1) break;
		else cnt++;
	}
	cout << "문자 a는 " << cnt << "개 있습니다." << endl;

	return 0;
}