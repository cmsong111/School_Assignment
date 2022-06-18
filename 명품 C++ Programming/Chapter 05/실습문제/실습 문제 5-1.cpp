#include <iostream>

using namespace std;

class Circle
{
    int radius;

public:
    void setCircle(int radius = 10)
    {
        this->radius = radius;
    }
    double getArea() { return 3.14 * radius * radius; }
    int get_radius()
    {
        return radius;
    }
};

void swap(Circle &a, Circle &b)
{
    Circle temp;
    temp = a;
    a = b;
    b = temp;
}

int main(void)
{
    Circle A, B;
    A.setCircle(4);
    B.setCircle(10);

    cout << "A circle = radius : " << A.get_radius() << endl;
    cout << "B circle = radius : " << B.get_radius() << endl;

    swap(A, B);
    cout << "--------swap---------" << endl;

    cout << "A circle = radius : " << A.get_radius() << endl;
    cout << "B circle = radius : " << B.get_radius() << endl;

    return 0;
}
