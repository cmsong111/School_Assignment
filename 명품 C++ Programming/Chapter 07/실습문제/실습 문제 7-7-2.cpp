#include <iostream>

using namespace std;

class Matrix {
public:
	int* p = new int[4];
	Matrix(int s1 = 0, int s2 = 0, int s3 = 0, int s4 = 0);
	void show();

	friend void operator<<(Matrix &arr, int a[]);
	friend void operator>>(Matrix arr, int a[]);
};

Matrix::Matrix(int s1, int s2, int s3, int s4) {
	this->p[0] = s1;
	this->p[1] = s2;
	this->p[2] = s3;
	this->p[3] = s4;
}

void Matrix::show() {
	cout << "Martix = { ";
	for (int i = 0; i < 4; i++) {
		cout << this->p[i] << ' ';
	}
	cout << "}" << endl;
	return;
}

void operator>>(Matrix arr, int a[]) {
	a[0] = arr.p[0];
	a[1] = arr.p[1];
	a[2] = arr.p[2];
	a[3] = arr.p[3];
	return;
}
void operator<<(Matrix& arr, int a[]){
	arr.p[0] = a[0];
	arr.p[1] = a[1];
	arr.p[2] = a[2];
	arr.p[3] = a[3];
	return;
}

int main(void) {

	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };

	a >> x;
	b << y;

	for (int i = 0; i < 4; i++) {
		cout << x[i] << ' ';
	}
	cout << endl;

	b.show();

	return 0;
}