#include <iostream>

using namespace std;

class Color
{
	int red, green, blue;

public:
	Color() { red = green = blue = 0; }
	Color(int r, int g, int b)
	{
		red = r;
		green = g;
		blue = b;
	}
	void setColor(int r, int g, int b)
	{
		red = r;
		green = g;
		blue = b;
	}
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
};

int main()
{
	Color screenColor(255, 0, 0);   //빨간색의 screenColor 객체생성
	Color *p;						//Color 타입의 포인터 변수 p 선언
	p = &screenColor;				//(1) p가 screenColor의 주소를 가지도록 작성
	p->show();  					//(2) p와 show()를 이용하여 screenColor 색 출력
	Color colors[3];				//(3) Color의 일차원 배열 Colors 선언. 원소는 3개
	p = colors;						//(4) p가 colors 배열을 가리키도록 코드 작성

	//(5) p와 setcolor를 이용하여 Colors[0], color[1], color[2] 가
	// 각각 빨강, 초록, 파란색을 가지도록 코드 작성
	p[0].setColor(255, 0, 0);
	p[1].setColor(0, 255, 0);
	p[2].setColor(0, 0, 255);

	p[0].show();
	p[1].show();
	p[2].show();

	return 0;
}