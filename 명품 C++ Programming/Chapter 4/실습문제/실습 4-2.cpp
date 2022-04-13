#include <iostream>
using namespace std;

int main() {
    int* arr = new int[5];
    float average = 0.0f;

    cout << "정수 5개 입력>> ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        average += arr[i];
    }

    average /= 5;
    cout << "평균 " << average << endl;

    delete [] arr;
    
    return 0;
}
