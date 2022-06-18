#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Random {
	
	int seed = 0;

public:
	Random();
	int next();
	int nextInRange(int start, int end);

};

Random::Random() {

}

int Random::next() {
	srand((unsigned)time(0));
	int n = rand();
	return n;
}

int Random::nextInRange(int start, int end) {
	srand((unsigned)time(0));
	int n = rand() % (end - start + 1) + start;
	return n;
}


int main() {
	Random r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 정수 10개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 4까지의 랜덤 정수 10개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
	return 0;
}