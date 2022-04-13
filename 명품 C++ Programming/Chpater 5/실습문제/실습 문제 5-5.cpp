#include <iostream>

using namespace std;

class Circle
{
    int radius;

public:
    Circle(int r)
    {
        this->radius = r;
    }
    int getRadius()
    {
        return radius;
    }
    void setRaduius(int r)
    {
        radius = r;
    }
    void show()
    {
        cout << "반지름이 " << radius << "안 원" << endl;
    }
};

void IncresedBy(Circle &a, Circle b)
{
    int r = a.getRadius() + b.getRadius();
    a.setRaduius(r);
}

int main()
{
    Circle x(10), y(5);
    IncresedBy(x, y);
    x.show();
    return 0;
}
