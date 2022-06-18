#include <iostream>

using namespace std;

class Circle {
	int radius;
public:
	Circle(int r = 0);
	void show();
	friend Circle operator+(int num, Circle arr);
};

Circle::Circle(int r) {
	this->radius = r;
}

void Circle::show() {
	cout << "radius = " << this->radius << " 인 원" << endl;
}

Circle operator+(int num, Circle arr) {
	Circle temp;
	temp.radius = num + arr.radius;
	return temp;
}

int main(void) {

	Circle a(5), b(4);
	b = 1 + a;
	a.show();
	b.show();
	return 0;
}