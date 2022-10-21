#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    while(true){
        int count = 0;
        int temp;
        vector<int> arr;
        cin >> count;
        if (count == 0){
            break;
        }
        for(int i = 0 ; i < count ; i++){
            cin >> temp;
            arr.push_back(temp);
        }
        sort(arr.begin(),arr.end());

        if ((arr.back() - arr.front()) % 2 == 0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
       
}