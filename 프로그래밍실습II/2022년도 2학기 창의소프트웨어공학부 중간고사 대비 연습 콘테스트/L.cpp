#include <iostream>

using namespace std;

int isPrime(int x){
    if (x == 1){
        return 0;
    }
    for(int i = 2 ;i < x/2+1 ;i++){
        if ( x % i == 0){
            return 0;
        }
    }
    return 1;
}


int main(void) {
    int start, end,count = 1;

    while(1){
        cin >> start >> end;
        int temp;
        if (start > end){
            temp = start;
            start = end;
            end = temp;
        }
        count = 1;
        if (start == 0 && end == 0){
            break;
        }
        
        for(int i = start; i <= end-2 ; i++){
            if (isPrime(i) && isPrime(i+2)){
                cout << count << ":(" << i << "," << i+2 << ")" << endl;
                count++;
            }
        }
        if (count == 1){
            cout << "No Twin Primes!" << endl;
        }
    }
    


}