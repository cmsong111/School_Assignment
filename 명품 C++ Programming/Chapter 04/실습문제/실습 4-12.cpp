#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius) {
		this->name = name; this->radius = radius;
	}
	double getArea() { return 3.14 * radius * radius; }
	string getName() { return name; }
};

class CircleManager {
	Circle *p;
	int size;
public:
	CircleManager(int size) { p = new Circle[size]; this->size = size; }
	~CircleManager() { delete [] p; }
	Circle * getCircle() { return p; }
	void searchByName();
	void searchByArea();
};

void CircleManager::searchByName() {
	string find;
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> find;

	for (int i = 0; i < size; i++) {
		if (find==p[i].getName()) {
		//if (find.compare(p[i].getName()) == 0) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << endl;
			break;
		}
	}
}
void CircleManager::searchByArea() {
	int minArea;
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> minArea;
	cout << minArea << "보다 큰 원을 검색합니다." << endl;

	for (int i = 0; i < size; i++) {
		if (p[i].getArea()>minArea) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", ";
		}
	}
	cout << endl;
}

int main() {
	int numOfCircles;
	cout << "원의 개수 >> ";
	cin >> numOfCircles;

	CircleManager circles(numOfCircles);

	for (int i = 0; i < numOfCircles; i++) {
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		string name;
		int r;
		cin >> name >> r;
		circles.getCircle()[i].setCircle(name, r);
	}
	circles.searchByName();
	circles.searchByArea();

	return 0;
}