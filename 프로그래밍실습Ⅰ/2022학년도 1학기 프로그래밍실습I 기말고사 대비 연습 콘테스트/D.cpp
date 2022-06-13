#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <math.h>
 
using namespace std;
 
int main(void) {
     
    int testcase;
    cin >> testcase;
    string str1, str2;
    int num1, num2;
 
    while (testcase--) {
        cin >> str1;
        str2 = str1;
        reverse(str2.begin(), str2.end());
 
        stringstream ssInt(str2);
        ssInt >> num2;
        stringstream ssInt1(str1);
        ssInt1 >> num1;
 
 
 
        if (num1 == num2) {
            cout << "SAME" << endl;
        }
        else {
            cout << abs(num1 - num2) % 51 << endl;
        }
 
    }
    return 0;
}
/**************************************************************
    Problem: 1280
    User: 20192336
    Language: C++
    Result: Accepted
    Time:3 ms
    Memory:2076 kb
****************************************************************/
