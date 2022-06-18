#include <iostream>
#include <string>

using namespace std;

class CoffeeMachine {
	int Coffee, Water, Sugar;

public:
	CoffeeMachine(int coffee, int water, int suger);
	void show();
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffe();
	void fill();
};

CoffeeMachine::CoffeeMachine(int coffee, int water, int sugar) {
	Coffee = coffee;
	Water = water;
	Sugar = sugar;
}

void CoffeeMachine::show() {
	cout << "커피 머신 상태\t커피:" << Coffee << "\t물:" << Water << "\t설탕:" << Sugar << endl;
}

void CoffeeMachine::drinkEspresso() {
	Water -= 1;
	Coffee -= 1;
}
void CoffeeMachine::drinkAmericano() {
	Water -= 2;
	Coffee -= 1;
}
void CoffeeMachine::drinkSugarCoffe() {
	Water -= 2;
	Coffee -= 1;
	Sugar -= 1;
}

void CoffeeMachine::fill() {
	Water = 10;
	Coffee = 10;
	Sugar = 10;
}

int main(void) {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffe();
	java.show();
	java.fill();
	java.show();

	return 0;
}