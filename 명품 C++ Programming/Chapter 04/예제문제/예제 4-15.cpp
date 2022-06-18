#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
    cout << "여러줄의 문자열 입력. 입력의 끝은 &" << endl;
    getline(cin, s, '&');
    cin.ignore();
    
    string f, r;
    cout << endl << "find : ";
    getline(cin, f, '\n');
    cout << "replace : ";
    getline(cin, r, '\n');
    
    int startINdex =0;
    while(true) {
    	int fIndex = s.find(f, startIndex);
        if(fIndex == -1)
        	break;
            
        s.replace(fIndex, f.length(), r);
        startIndex = fIndex + r.length();
        }
        
     cout << s << endl;
 }
