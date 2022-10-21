#include <iostream>

using namespace std;

int sum(int x){
    int result = 0;
    if (10 <= x && x < 100){
        result += x % 10;
        result += x / 10;
        return result;
        
    }else if (100 <= x){
        result += x / 100;
        result += (x/10)%10;
        result += x % 10;
        return result;
    }
    return x;

}

int main(void) {
    int testCase;

    cin >> testCase;

    while(testCase--){
        int num1, num2;
        cin >> num1 >> num2;
        num1 = sum(num1);
        num2 = sum(num2);
        cout << sum(num1+num2) << endl;
    }


}