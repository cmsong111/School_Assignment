#include <iostream>

using namespace std;

class ArrayUtility2 {
public:
	static int* concat(int s1[], int s2[], int size);
	static int* remove(int s1[], int s2[], int size, int& retSize);
};

int* ArrayUtility2::concat(int s1[], int s2[], int size) {
	int* temp = new int[size * 2];
	for (int i = 0; i < size; i++) {
		temp[i] = s1[i];
	}
	for (int i = 0; i < size; i++) {
		temp[i + 5] = s2[i];
	}
	return temp;
}

int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize) {
	int* rmtot = new int[size / 2];
	int cnt;
	for (int i = 0; i < size / 2; i++) {
		cnt = 0;
		for (int j = 0; j < size / 2; j++) {
			if (s1[i] == s2[j]) {
				cnt++;
			}
		}
		if (cnt == 0) {
			rmtot[i] = s1[i];
			retSize++;
		}
	}
	if (retSize == 0) return NULL;
	return rmtot;
}

int main(void) {
	int* x = new int[5];
	int* y = new int[5];
	int* p;
	int retSize = 0;

	cout << "정수를 5개 입력하라. 배열 x에 삽입한다 >>";
	cin >> x[0] >> x[1] >> x[2] >> x[3] >> x[4];

	cout << "정수를 5개 입력하라. 배열 y에 삽입한다 >>";
	cin >> y[0] >> y[1] >> y[2] >> y[3] >> y[4];

	p = ArrayUtility2::concat(x, y, 5);
	cout << "합친 정수 배열을 출력한다" << endl;
	for (int i = 0; i < 10; i++) {
		cout << p[i] << ' ';
	}
	cout << endl;

	p = ArrayUtility2::remove(x, y, 10, retSize);
	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << retSize << endl;
	for (int i = 0; i < retSize; i++) {
		cout << p[i] << ' ';
	}
	delete[] x;
	delete[] y;

	return 0;
}