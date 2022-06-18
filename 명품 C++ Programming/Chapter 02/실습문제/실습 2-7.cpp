#include <iostream>

using namespace std;

int main(void) {
	char YesOrNO[30];
	while (true) {
		cout << "종료하고싶으시면 yes를 입력하세요>>";
		cin.getline(YesOrNO, 30, '\n');
		if (!strcmp(YesOrNO, "yes")) {

			break;
		}

	}
	return 0;
}
