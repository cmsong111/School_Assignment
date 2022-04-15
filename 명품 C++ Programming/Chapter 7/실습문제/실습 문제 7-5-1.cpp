#include <iostream>
#include <string>

using namespace std;

class Color {
	int red, green, blue;

public:
	Color(int red = 0, int green = 0, int blue = 0);
	void show();
	Color& operator+(Color add);
	bool operator==(Color compare);
};

void Color::show() {
	cout << red << ' ' << green << ' ' << blue << endl;
}

Color::Color(int red, int green, int blue) {
	this->red = red;
	this->green = green;
	this->blue = blue;
}

Color& Color::operator+(Color add) {
	this->red += add.red;
	this->green += add.green;
	this->blue += add.blue;
	return *this;
}

bool Color::operator==(Color compare){

	if (this->blue == compare.blue && this->green == compare.green && this->red == compare.red)
		return true;
	else
		return false;
}

int main(void) {
	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);

	if (c == fuchsia)
		cout << "보라색 맞음";
	else
		cout << "보라색 아님";
	return 0;
}