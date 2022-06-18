#include <iostream>

using namespace std;
class Circle
{
public:
	int radius;
	Circle();
	Circle(int r);

	double getArea()
	{
		return 3.14 * radius * radius;
	}
};

Circle::Circle()
{
	radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}
Circle::Circle(int r)
{
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

int main(int argc, char **argv)
{
	Circle donut;
	double area = donut.getArea();
	cout << "도넛 면적은 " << area << endl;

	Circle pizza(30);
	area = pizza.getArea();
	cout << "도넛 면적은 " << area << endl;

	return 0;
}