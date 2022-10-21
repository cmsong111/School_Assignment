#include <iostream>

using namespace std;

int main(void){
    int testCase;

    cin >> testCase;

    while(testCase--){
        int temp1, temp2, temp3, temp4, temp5, temp6;
        int odd1=0, odd2=0;
        cin >> temp1 >> temp2 >> temp3 >> temp4 >> temp5 >> temp6 ;
        if (temp1 + temp2 + temp3 > temp4 + temp5 + temp6){
            cout << "Joo-Ahn wins" << endl;
        }
        else if (temp1 + temp2 + temp3 < temp4 + temp5 + temp6){
            cout << "Min-Gwang wins" << endl;
        }
        else if (temp1 + temp2 + temp3 == temp4 + temp5 + temp6){
            if (temp1 % 2 == 1){
                odd1 += 1;
            }
            if (temp2 % 2 == 1){
                odd1 += 1;
            }
            if (temp3 % 2 == 1){
                odd1 += 1;
            }
            if (temp4 % 2 == 1){
                odd2 += 1;
            }
            if (temp5 % 2 == 1){
                odd2 += 1;
            }
            if (temp6 % 2 == 1){
                odd2 += 1;
            }
            if (odd1 > odd2){
                cout << "Joo-Ahn wins" << endl;
            } else if (odd1 < odd2){
                cout << "Min-Gwang wins" << endl;
            }else{
            cout << "Draw" << endl;
            }
        }
    }
}