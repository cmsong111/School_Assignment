#include <iostream>
#include <algorithm>
#include <string>
 
using namespace std;
 
int main(void) {
 
    int testcase, result, same;
    cin >> testcase;
    string arr1, arr2;
 
    while (testcase--) {
        same = result = 0;
        cin >> arr1 >> arr2;
 
        //first
        for (int i = 0; i < 4; i++) {
            if (arr1[i] == arr2[i]) {
                result += 25000;
            }
        }
 
 
 
        //second
        for (int i = 0; i < 4; i++) {
            for (int ii = 0; ii < 4; ii++) {
                if (arr1[i] == arr2[ii]) {
                    result += 5000;
                }
            }
        }
 
 
 
        //thrid
        for (int i = 0; i < 4; i++) {
            for (int ii = 0; ii < 4; ii++) {
                if (arr1[i] == arr2[ii]) {
                    same++;
                }
            }
        }
        if (same == 0) {
            result += 50000;
        }
 
 
 
        cout << result << endl;
    }
    return 0;
}
/**************************************************************
    Problem: 1281
    User: 20192336
    Language: C++
    Result: Accepted
    Time:3 ms
    Memory:2024 kb
****************************************************************/