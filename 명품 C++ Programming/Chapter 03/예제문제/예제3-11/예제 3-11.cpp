//두개의 정수를 입력받아 덧셈을 실행하는 프로그램, 헤더파일 및 cpp 파일로 분리해서 재작성

#include <iostream>
using namespace std;

class Adder{
	int op1, op2;
public:
	Adder(int a, int b);
    int process();
};

Adder::Adder(int a, int b) {
	op1 = a;
	op2 = b;
}

int Adder::process() {
	return op1 + op2;
}

class Calculator{
public:
	void run();
};

void Calculator::run(){
	cout << "두 개의 수를 입력하세요 >> ";
    int a, b;
    cin >> a >> b;
    Adder adder(a,b);
    cout << adder.process();
}

int main() {
	Calculator clac;
    clac.run();
}