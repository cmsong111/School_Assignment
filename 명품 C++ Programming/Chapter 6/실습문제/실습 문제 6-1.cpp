#include <iostream>

using namespace std;

int add(int *first, int count, int *second = NULL)
{
    int temp = 0;
    for (int i = 0; i < count; i++)
    {
        temp += first[i];
    }
    if (second != NULL)
    {
        for (int i = 0; i < count; i++)
        {
            temp += second[i];
        }
    }
    return temp;
}

int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {6, 7, 8, 9, 10};
    int c = add(a, 5);
    int d = add(a, 5, b);
    cout << c << endl;
    cout << d << endl;

    return 0;
}
