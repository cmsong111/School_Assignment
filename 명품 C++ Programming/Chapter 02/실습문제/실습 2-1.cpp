#include <iostream>

using std::cout;
using std::endl;

int main(void) {

	for (int i = 1; i < 101; i++) {
		cout << i << "\t";

		if (i % 10 == 0) {
			cout << "" << endl;
		}
	}

	return 0;
}
