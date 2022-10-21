#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    int testCase;
    cin >> testCase;

    while(testCase--){
        vector<int> small;
        vector<int> big;
        
        int x, y,int_temp;
        cin >> x >> y;
        for(int i = 0 ; i< x; i ++){
            vector<int> temp;
            for(int ii = 0 ; ii < y ; ii++){
                cin >> int_temp;
                temp.push_back(int_temp);
            }
            sort(temp.begin(),temp.end());
            small.push_back(temp.front());
            big.push_back(temp.back());
        }
        sort(small.begin(),small.end());
        sort(big.begin(),big.end());

        for(int i = 0; i < x;i++){
            cout << small[i] << " ";
        }
        for(int i = 0; i < x;i++){
            cout << big[i] << " " ;
        }
        cout << endl;     
    }       
}