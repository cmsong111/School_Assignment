#include <iostream>
#include <math.h>
using namespace std;
 
int main(void) {
     
    int testcase;
    cin >> testcase;
    int temp;
    long long result;
    while (testcase--) {
        cin >> temp;
        if (0 <= temp && temp <= 30) {
             
            result = pow(2, temp);
            cout << result << endl;
        }
        else {
             
            cout << "Impossible" << endl;
        }
    }
    return 0;
}
/**************************************************************
    Problem: 1277
    User: 20192336
    Language: C++
    Result: Accepted
    Time:2 ms
    Memory:2208 kb
****************************************************************/