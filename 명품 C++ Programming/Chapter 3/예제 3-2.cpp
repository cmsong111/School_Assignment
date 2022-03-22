#include <iostream>
using namespace std;

class Rectangle{
public:
	int width;
	int height;
	int getArea();
};

int Rectangle::getArea(){
	return width * height;
}

int main(int argc, char** argv) {
	Rectangle rect;
	rect.height=3;
	rect.width=3;
	cout << "area is :" << rect.getArea() <<endl;
	
	
	return 0;
}
