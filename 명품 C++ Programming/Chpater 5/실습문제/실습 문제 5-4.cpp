#include <iostream>

using namespace std;

bool bigger(int a, int b, int &big)
{
    big = (a > b) ? a : b;
    if (a == b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    int a, b, big;
    cout << "정수 2개를 입력하시오 >>";
    cin >> a >> b;
    if (bigger(a, b, big))
    {
        cout << "값이 같습니다" << endl;
    }
    else
    {
        cout << "큰 수는 = " << big << endl;
    }

    return 0;
}
