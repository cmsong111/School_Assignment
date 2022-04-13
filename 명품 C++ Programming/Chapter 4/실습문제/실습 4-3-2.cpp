#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	int cnt = 0, ind = 0;

	cout << "문자열 입력>> ";
	getline(cin, str);

	ind = str.find('a', 0);

	cout << ind << endl;

	return 0;
}
