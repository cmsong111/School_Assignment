#include <iostream>

using namespace std;

class Rectangle
{
public:
    int width, height;
    bool isSquare()
    {
        if (width == height)
            return true;
        else
            return false;
    };

    Rectangle(int x, int y);
    Rectangle(int x);
    Rectangle();
};

Rectangle::Rectangle() : Rectangle(1) {}

Rectangle::Rectangle(int x) : Rectangle(x, x) {}

Rectangle::Rectangle(int x, int y)
{
    width = x;
    height = y;
}

int main(int argc, char **argv)
{
    Rectangle rect1;
    Rectangle rect2(3, 5);
    Rectangle rect3(3);

    if (rect1.isSquare())
        cout << "rect1 is Square" << endl;
    if (rect2.isSquare())
        cout << "rect2 is Square" << endl;
    if (rect3.isSquare())
        cout << "rect3 is Square" << endl;

    return 0;
}
