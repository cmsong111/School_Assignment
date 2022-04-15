#include <iostream>
#include <string>

using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title;
		this->price = price;
		this->pages = pages;
	}
	void show() {
		cout << title << " " << price << "원 " << pages << " 페이지 " << endl;
	}
	string getTitle() {
		return title;
	}

	friend bool operator<(string book2, Book& book1);

};


bool operator<(string book2, Book& book1) {
	if (book2 < book1.getTitle()) {
		return true;
	}
	else {
		return false;
	}
}



int main(void) {

	Book a("청춘", 20000, 300);
	string b;
	cout << "책 이름을 입력하시오 :";
	getline(cin, b);
	if (b < a) {
		cout << a.getTitle() << " 이 " << b << " 보다 뒤에 있구나!" << endl;
	}

	return 0;
}