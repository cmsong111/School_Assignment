#include <iostream>

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

	bool operator==(int price);
	bool operator==(string name);
	bool operator == (Book& compare);
};

bool Book::operator==(int price) {
	if (this->price == price) {
		return true;
	}
	else {
		return false;
	}
}

bool Book::operator==(string name) {
	if (this->title == name) {
		return true;
	}
	else {
		return false;
	}
}

bool Book::operator==(Book& compare) {
	if (this->title == compare.title && this->price == compare.price && this->price == compare.price) {
		return true;
	}
	else {
		return false;
	}
}




int main(void) {

	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
	if (a == 30000) {
		cout << "정가 30000원" << endl;
	}
	if (a == "명품 C++") {
		cout << "명품 C++ 입니다." << endl;
	}
	if (a == b) {
		cout << "두 책이 같은책입니다." << endl;
	}
	return 0;
}