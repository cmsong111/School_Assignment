#include <iostream>
using namespace std;

int main(){
    int *p;
    
    p = new int;
    
    if(!p){
        cout<< "메모리 참조 실패" <<endl;
    }
    
    *p = 5;
    int n = *p;
    
    cout <<"*p = " << *p << endl;
    cout <<"n = " << n << endl;
    
    return 0;
}
