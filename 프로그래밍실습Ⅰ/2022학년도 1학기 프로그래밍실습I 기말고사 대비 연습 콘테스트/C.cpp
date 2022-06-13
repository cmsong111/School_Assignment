#include <iostream>
 
 
using namespace std;
 
int main(void) {
     
    int testcase;
    int height;
    cin >> testcase;
 
    while (testcase--) {
        cin >> height;
        if (height % 2 == 1) {
            height++;
        }
 
        for (int i = 1; i < height; i+=2) {
            for (int ii = 0; ii < (height-i)/2; ii++) {
                cout << " ";
            }
             
            for (int ii = 0; ii < i; ii++) {
                if (ii == 0 || ii == i - 1) {
                    cout << "$";
                }
                else {
                    cout << " ";
                }
            }
            cout << endl;
        }
        for (int i = height-3; i > 0; i -= 2) {
            for (int ii = 0; ii < (height - i) / 2; ii++) {
                cout << " ";
            }
 
            for (int ii = 0; ii < i; ii++) {
                 
                if (ii == 0 || ii == i - 1) {
                    cout << "$";
                }
                else {
                    cout << " ";
                }
            }
            cout << endl;
        }
 
    }
    return 0;
}
/**************************************************************
    Problem: 1279
    User: 20192336
    Language: C++
    Result: Accepted
    Time:3 ms
    Memory:2024 kb
****************************************************************/