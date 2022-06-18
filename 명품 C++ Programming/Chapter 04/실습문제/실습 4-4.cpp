#include <iostream>
#include <string>

using namespace std;

class Sample
{
    int *p;
    int size;

public:
    Sample(int n) //생성자
    {
        size = n; // n개 정수 배열의 동적 생성
        p = new int[n];
    }
    void read();
    void write();
    int big();
    ~Sample();
};

void Sample::read()
{
    for (int i = 0; i < size; i++)
        cin >> p[i];
}
void Sample::write()
{
    for (int i = 0; i < size; i++)
        cout << p[i] << ' ';
    cout << endl;
}
int Sample::big()
{
    int max = p[0];
    for (int i = 0; i < size; i++)
    {
        if (p[i] > max)
            max = p[i];
    }
    return max;
}
Sample::~Sample()
{
    delete[] p;
}

int main()
{
    Sample s(10);    //10개 정수 배열 가진 Sample 객체 생성
    s.read();        //키보드에서 정수 배열 읽기
    s.write();       //정수 배열 출력
    cout << "가장 큰 수는 " << s.big() << endl;

    return 0;
}
