#include <iostream>
#include <string>

using namespace std;

class Account {
	int Money, Cal,Id;
	string Name;


public:
	Account(string name, int id, int money);
	void deposit(int cal);
	void withdraw(int cal);
	string getOwner();
	int inquiry();

};

Account::Account(string name, int id, int money) {
	Name = name;
	Money = money;
	Id = id;
}

void Account::deposit(int cal) {
	Money += cal;
}

void Account::withdraw(int cal) {
	Money -= cal;
}

string Account::getOwner() {
	return Name;
}

int Account::inquiry() {
	return Money;
}


int main(void) {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;
	a.withdraw(20000);
	cout << a.getOwner() << "의 잔액은 " << a.inquiry() << endl;

	return 0;
}