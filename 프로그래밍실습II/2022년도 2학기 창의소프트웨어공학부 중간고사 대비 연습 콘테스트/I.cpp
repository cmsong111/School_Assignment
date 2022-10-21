#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    int testCase;
    cin >> testCase;

    while(testCase--){
        int count = 0,temp_arr;
        int result[10] = {0,};
        cin >> count;
    
        for(int i = 0 ; i <count ; i++){
            cin >> temp_arr;
            result[temp_arr%10]++;
        }   

            for(int i = 0 ; i <10 ; i++){
                cout << i  << " : " << result[i] << endl;
            }
        cout << endl;
    }       
}