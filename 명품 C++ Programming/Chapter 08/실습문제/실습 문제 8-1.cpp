#include <iostream>

using namespace std;

class Circle {
	int radius;
public:
	Circle(int r = 0) { this->radius = r; }
	int getRadius() { return this->radius; }
	void SetRadius(int r) { this->radius = r; }
	double getArea() { return 3.14 * this->radius * this->radius; }
};

class NamedCircle : public Circle {
	string name;
public:
	NamedCircle(int r = 0, string name = "") : Circle(r) { this->name = name; }
	string getName() { return this->name; }
	void setName(string name);
	void show() { cout << "반지름이 " << this->getRadius() << "인 " << this->getName() << endl; }
};


int main(void) {
	NamedCircle waffle(3, "waffle");
	waffle.show();

	return 0;
}