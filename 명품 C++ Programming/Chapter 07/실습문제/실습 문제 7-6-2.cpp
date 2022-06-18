#include <iostream>

using namespace std;

class Matrix {
public:
	int* p = new int[4];
	Matrix(int s1 = 0, int s2 = 0, int s3 = 0, int s4 = 0);
	friend Matrix operator+(Matrix source, Matrix add);
	friend Matrix& operator+=(Matrix source, Matrix add);
	friend bool operator==(Matrix source,Matrix compare);
	void show();
};

Matrix::Matrix(int s1, int s2, int s3, int s4) {
	this->p[0] = s1;
	this->p[1] = s2;
	this->p[2] = s3;
	this->p[3] = s4;
}
Matrix operator+(Matrix source, Matrix add) {
	Matrix temp;
	temp.p[0] = source.p[0] + add.p[0];
	temp.p[1] = source.p[1] + add.p[1];
	temp.p[2] = source.p[2] + add.p[2];
	temp.p[3] = source.p[3] + add.p[3];
	return temp;
}
Matrix &operator+=(Matrix source, Matrix add) {
	source.p[0] += add.p[0];
	source.p[1] += add.p[1];
	source.p[2] += add.p[2];
	source.p[3] += add.p[3];
	return source;
}
bool operator==(Matrix source, Matrix compare) {
	if (source.p[0] == compare.p[0] && source.p[1] == compare.p[1] && source.p[2] == compare.p[2] && source.p[3] == compare.p[3]) {
		return true;
	}
	return false;
}


void Matrix::show() {
	cout << "Matrix = { " << this->p[0] << ' ' << this->p[1] << ' ' << this->p[2] << ' ' << this->p[3] << ' ' << "}" << endl;
}

int main(void) {
	Matrix a(1, 2, 3, 4), b(2, 3, 4, 5), c;
	c = a + b;
	a += b;
	a.show();
	b.show();
	c.show();

	if (a == c) {
		cout << "A and C are the same" << endl;
	}


	return 0;
}