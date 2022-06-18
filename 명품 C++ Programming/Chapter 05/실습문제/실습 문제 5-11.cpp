#include <iostream>
#include <cstring>

using namespace std;

class Book
{
    char *title;
    int price;

public:
    Book(const char *title, int price)
    {
        this->price = price;
        int size = strlen(title) + 1;
        this->title = new char[size];
        strcpy(this->title, title);
    }
    void set(char *title, int price)
    {
        if (this->title)
            delete[] this->title;
        this->price = price;
        int size = strlen(title) + 1;
        this->title = new char[size];
        strcpy(this->title, title);
    }
    void show()
    {
        cout << title << ' ' << price << "원" << endl;
    }
};

int main(void)
{
    Book cpp("명품 C++", 10000);
    Book java = cpp;
    java.set("명품 자바", 12000);
    cpp.show();
    java.show();

    return 0;
}
