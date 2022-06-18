#include <iostream>

using std::cout;
using std::endl;

int main(void) {

	for (int i = 1; i < 10; i++) {
		for (int ii = 1; ii < 10; ii++) {
			cout << ii << "x" << i << "=" << i * ii << "\t";

			if (ii % 9 == 0) {
				cout << "" << endl;
			}
		}
	}
	return 0;
}
