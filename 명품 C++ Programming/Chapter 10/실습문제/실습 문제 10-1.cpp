#include <iostream>

using namespace std;

template<class T>
T biggest(T* arr, int len) {
	T temp = arr[0];
	for (int i = 0; i < len; i++) {
		if (temp < arr[i]) {
			temp = arr[i];
		}
	}
	return temp;
}

int main(void) {

	int x[] = { 1,10,100,5,4 };
	cout << biggest(x, 5) << endl;
	return 0;
}