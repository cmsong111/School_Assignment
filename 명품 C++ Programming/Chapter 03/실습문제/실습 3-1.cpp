#include <iostream>

using namespace std;

class Tower
{
    int height;

public:
    int getHeight();

    Tower();
    Tower(int a);
};

Tower::Tower() : Tower(1) {}

Tower::Tower(int a)
{
    height = a;
}

int Tower::getHeight(){
    return height;
}

int main(void)
{
    Tower myTower;
    Tower seoulTower(100);
    cout << "높이는" << myTower.getHeight() << "미터" << endl;
    cout << "높이는" << seoulTower.getHeight() << "미터" << endl;

    return 0;
}