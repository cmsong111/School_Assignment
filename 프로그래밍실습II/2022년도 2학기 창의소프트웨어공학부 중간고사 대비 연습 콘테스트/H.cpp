#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int testCase;

    cin >> testCase;

    while(testCase--){
        int arr[1001];
        int count = 0,temp,result = 0;
        double avg = 0;
        cin >> count;
        for(int i = 0 ; i< count ; i++){
            cin >> temp;
            arr[i]=temp;
            avg += temp;
        }
        avg /= count;
        for(int i = 0 ; i< count ; i++){
            if (arr[i] > avg){

                result += 1;
            }
        }
        cout << result << " from total " << count << endl;
       
    }


}