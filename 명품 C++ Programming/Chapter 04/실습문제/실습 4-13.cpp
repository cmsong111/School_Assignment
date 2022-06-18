#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Histogram {
	string str;
	int alphabet[26] = { 0 };
public:
	Histogram(string str) { this->str = str; }
	void put(string new_str) { this->str.append(new_str); }
	void putc(char ch) { this->str.append(&ch); }
	void print();
	int getAlphabetSize();
	void countAlphabet();
};

void Histogram::print() {
	cout << str << endl << endl;
	cout << "총 알파벳 수 " << getAlphabetSize() << endl << endl;

	countAlphabet();
	char ch = 'a';
	while (ch <= 'z') {
		cout << ch << " (" << alphabet[(int)ch - 'a'] << ")\t: ";
		for (int i = 0; i < alphabet[(int)ch - 'a']; i++) {
			cout << "*";
		}
		cout << endl;
		ch++;
	}
}

int Histogram::getAlphabetSize() {
	int cnt = 0;
	for (int i = 0; i < str.length(); i++) {
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
			cnt++;
		}
	}
	return cnt;
}


void Histogram::countAlphabet() {
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			int ind = str[i] - 'A';
			alphabet[ind]++;
		}
		if (str[i] >= 'a' && str[i] <= 'z'){
			int ind = str[i] - 'a';
			alphabet[ind]++;
		}
	}
}

int main() {
	Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
	elvisHisto.put("falling in love with you");
	elvisHisto.putc('-');
	elvisHisto.put("Elvis Presley");
	elvisHisto.print();

	return 0;
}