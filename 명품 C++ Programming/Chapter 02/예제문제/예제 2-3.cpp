#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char **argv)
{

	int width;
	cout << "너비를 입력하세요>>";
	cin >> width;

	int height;
	cout << "높이를 입력하세요>>";
	cin >> height;

	int area = width * height;
	cout << "면적은" << area << endl;

	return 0;
}
