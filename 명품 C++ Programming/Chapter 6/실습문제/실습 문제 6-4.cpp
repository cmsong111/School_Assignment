#include <iostream>

using namespace std;

class Myvector {
	int* mem;
	int size;
public:
	Myvector(int n = 100, int val = 0);
	~Myvector() { delete[] mem; }
	void show() {
		for (int i = 0; i < size; i++) {
			cout << mem[i] << ' ';
		}
		cout << endl;
	}
};


Myvector::Myvector(int n, int val) {
	this->mem = new int[n];
	this->size = n;
	for (int i = 0; i < size; i++) {
		mem[i] = val;
	}
}

int main(void) {
	Myvector test1;
	test1.show();
	
	Myvector test2(5, 20);
	test2.show();

	return 0;
}