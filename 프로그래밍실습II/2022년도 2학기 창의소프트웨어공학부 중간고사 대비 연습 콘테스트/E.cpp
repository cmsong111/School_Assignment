#include <iostream>

using namespace std;

int main(void){
    int testCase, count ;

    cin >> testCase;

    for (int i = 0;i<testCase;i++){
        cin >> count;
        cout << "Case #" << i+1 << ":"<<endl;
        for(int ii = 1; ii<count+1;ii++){
            for(int iii =0; iii<ii;iii++){
                cout << "*";
            }
            cout << endl;
        }
        for(int ii = count-1; ii!=0;ii--){
            for(int iii =0; iii<ii;iii++){
                cout << "*";
            }
            cout << endl;
        }
        cout << endl;
    }
}