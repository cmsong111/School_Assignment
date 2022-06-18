#include <iostream>

using namespace std;


int big(int a, int b, int c = 0) {
	if (a > b && a > c) {
		return a;
	}
	else if (b > a && b > c) {
		return b;
	}
	else if (c > a && c > b) {
		return c;
	}
	else {
		return a;
	}
}

int main(void)
{
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);

	cout << x << " " << y << " " << z << " " << endl;

	return 0;
}
