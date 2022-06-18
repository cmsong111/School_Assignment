#include <iostream>

using namespace std;

class MyinStack
{
    int tos = 0;
    int size;
    int *p;

public:
    MyinStack(int size)
    {
        this->size = size;
        p = new int[size];
    }
    MyinStack(const MyinStack &s)
    {
        this->tos = s.tos;
        this->size = s.size;
        p = new int[size];
        for (int i = 0; i < size; i++)
        {
            this->p[i] = s.p[i];
        }
    }

    bool push(int n)
    {
        if (tos != size)
        {
            p[tos] = n;
            tos++;
            return true;
        }
        else
        {
            return false;
        }
    }

    bool pop(int &n)
    {
        if (tos != 0)
        {
            tos--;
            n = p[tos];
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main(void)
{
    MyinStack a(10);
    a.push(10);
    a.push(20);
    MyinStack b = a;
    b.push(30);

    int n;
    a.pop(n);
    cout << "스택 a에서 팝한 값: " << n << endl;
    b.pop(n);
    cout << "스택 b에서 팝한 값: " << n << endl;

    return 0;
}
