#include <iostream>

using namespace std;

int main(void){
    int testCase;

    cin >> testCase;

    while(testCase--){
        int temp1, temp2, temp3, temp4;
        cin >> temp1 >> temp2 >> temp3 >> temp4 ;
        if (temp1 + temp2 > temp3 + temp4){
            cout << "Kim DS wins" << endl;
        }
        else if (temp1 + temp2 < temp3 + temp4){
            cout << "Yoo HJ wins" << endl;
        }
        else if (temp1 + temp2 == temp3 + temp4){
            cout << "Draw" << endl;
        }
    }
}