#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class Person {
	string name;
	string tel;
public:
	Person();
	string getName() { return name; }
	string getTal() { return tel; }
	void set(string name, string tel);
};
Person::Person() {

}

void Person::set(string name, string tel) {
	this->name = name;
	this->tel = tel;
}

int main() {
	Person person[3];
	cout << "이름과 전화번호를 입력해 주세요" << endl;

	for (int i = 0; i < 3; i++) {
		cout << "사람 " << i+1 << ">> ";
		string name, tel;
		cin >> name >> tel;
		person[i].set(name, tel);
	}

	cout << "모든 사람의 이름은 ";
	for (int i = 0; i < 3; i++) {
		cout << person[i].getName() << ' ';
	}
	cout << endl;

	cout << "전화번호 검색합니다. 이름을 입력하세요>>";
	string find;
	cin >> find;
	for (int i = 0; i < 3; i++) {
		if (find.compare(person[i].getName()) == 0) {
			cout << "전화 번호는 " << person[i].getTal() << endl;
			break;
		}
	}
	return 0;
}