#include <iostream>
#include <string>

using namespace std;

class Color {
	int red, green, blue;

public:
	Color(int red = 0, int green = 0, int blue = 0);
	void show();
	friend Color operator+(Color source,Color add);
	friend bool operator==(Color source,Color compare);
};

void Color::show() {
	cout << red << ' ' << green << ' ' << blue << endl;
}

Color::Color(int red, int green, int blue) {
	this->red = red;
	this->green = green;
	this->blue = blue;
}

Color operator+(Color source,Color add) {
	source.red += add.red;
	source.green += add.green;
	source.blue += add.blue;
	return source;
}

bool operator==(Color source,Color compare){

	if (source.blue == compare.blue && source.green == compare.green && source.red == compare.red)
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