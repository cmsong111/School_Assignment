#include <iostream>

using namespace std;

template<class T>
void reverseArray(T* arr1, int len) {
	T* temp = new T[len];

	for (int i = 0; i < len; i++) {
		temp[i] = arr1[i];
	}
	for (int i = 0; i < len; i++) {
		arr1[4 - i] = temp[i];
	}
	return;
}

int main(void) {

	int x[] = { 1,10,100,5,4 };

	reverseArray(x,5);

	for (int i = 0; i < 5; i++) {
		cout << x[i] << " ";
	}
	return 0;
}