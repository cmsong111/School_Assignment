#include <iostream>

using namespace std;

template <class T>
T* concat(T a[], int sizea, T b[], int sizeb) {
	T* temp = new T[sizea + sizeb];
	for (int i = 0; i < sizea; i++) {
		temp[i] = a[i];
	}
	for (int i = 0; i < sizeb + 1; i++) {
		temp[i + sizea] = b[i];
	}
	return temp;
}


int main(void) {
	int x[] = { 1, 2, 3, 4, 5 };
	int y[] = { 6, 7, 8, 9 };
	int* a = concat(x, 5, y, 4);
	int aSize = sizeof(x) / sizeof(x[0]) + sizeof(y) / sizeof(y[0]);

	for (int i = 0; i < aSize; i++)
		cout << a[i] << ' ';
	return 0;
}