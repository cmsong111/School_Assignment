#include <iostream>
#include <string>

using namespace std;

class Buffer
{
    string text;

public:
    Buffer(string text)
    {
        this->text = text;
    }

    void add(string next)
    {
        this->text += next;
    }
    void print()
    {
        cout << text << endl;
    }
};

Buffer &append(Buffer &temp, string text)
{
    temp.add(text);
    return temp;
}

int main(void)
{
    Buffer buf("Hello");
    Buffer &temp = append(buf, "Guys");
    temp.print();
    buf.print();

    return 0;
}
