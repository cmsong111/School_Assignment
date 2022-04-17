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
	void setName(string name) { this->name = name; }
	void show() { cout << "반지름이 " << this->getRadius() << "인 " << this->getName() << endl; }
};


int main(void) {
	NamedCircle pizza[5];
	int temp_int;
	string temp_string;
	NamedCircle *big;
	
	cout << "5개의 정수 반지름과 원의 이름를 입력하시오" << endl;
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">> ";
		cin >> temp_int >> temp_string;
		pizza[i].setName(temp_string);
		pizza[i].SetRadius(temp_int);
	}
	big = &pizza[0];
	for (int i = 1; i < 5; i++) {
		if (big->getRadius() < pizza[i].getRadius()) {
			big = &pizza[i];
		}
	}
	cout << "가장 면적이 큰 피자는 " << big->getName() << " 입니다" << endl;

	return 0;
}