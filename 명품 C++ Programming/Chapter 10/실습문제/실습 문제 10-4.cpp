#include <iostream>

using namespace std;

template <class T>
bool serch(T target, T* arr, int len) {
	for (int i = 0; i < len; i++) {
		if (arr[i] == target) {
			return true;
		}
	}
	return false;
}

int main(void) {

	int x[] = { 1,10,100,5,4 };
	if (serch(100, x, 5)) cout << "100이 배열 X에 포함되어 있다";
	else  cout << "100이 배열 X에 포함되어 있지않다.";
	return 0;
}