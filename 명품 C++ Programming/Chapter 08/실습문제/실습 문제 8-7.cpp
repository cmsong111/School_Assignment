#include <iostream>

using namespace std;

class BaseMemory {
	char* mem;
protected:
	BaseMemory(int size) { mem = new char[size]; }
	void set_mem(char* x) {
		mem = x;
	}
	void put_mem(int i, char copy) {
		mem[i] = copy;
	}
	char get_mem(int i) {
		return mem[i];
	}
};

class ROM : public BaseMemory {
public:
	ROM(int mem_size, char* x, int arr_size) : BaseMemory(mem_size) {
		set_mem(x);
	}
	char read(int i) {
		char mem = get_mem(i);
		return mem;
	}
};

class RAM :public BaseMemory {
public:
	RAM(int mem_size) : BaseMemory(mem_size) { ; }
	void write(int i, char rom_mem) {
		put_mem(i, rom_mem);
	}
	char read(int i) {
		char mem = get_mem(i);
		return mem;
	}
};

int main(void) {

	char x[5] = { 'h','e', 'l', 'l', 'o' };
	ROM biosROM(1024 * 24, x, 5);
	RAM mainMemory(1024 * 1024);

	for (int i = 0; i < 5; i++) {
		mainMemory.write(i, biosROM.read(i));
	}
	for (int i = 0; i < 5; i++) {
		cout << mainMemory.read(i);
	}

}