#include <iostream>

using namespace std;

int main(void){
    int testCase;
    int target = 0, now = 0,day = 0;
    cin >> testCase;

    int arr[] = {3,3,3,3,3,6,8};

    while(testCase--){
        now = 0;
        day = 0;
        
        cin >> target;

        while(now < target){
            now += arr[day % 7]*9000;
            day++;            
        }
        cout << day << endl;
        
    }
       
}