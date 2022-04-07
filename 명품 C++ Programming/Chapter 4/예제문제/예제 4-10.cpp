#include <iostream>
using namespace std;

class Circle {
	int radius;
public :
    Circle();
    Circle(int r);
    ~Circle();
    void setRadius(int r) { radius = r; }
    double getArea() { return 3.14*radius*radius; }
};

Circle::Circle(){
	radius = 1;
    cout << "생성자 실행 radius = " << radius << endl;
}


int main() {
	cout << "생성하고자 하는 원의 개수? ";
    int n, radius;
    cin >> n;
    if(n <=0)
    	return 0;
    for(int i=0; i<n; i++){
    	cout << "원" << i+1 << ": ";
        cin >> radius;
        pArray[i].setRadius(radius);
        }
        
    int count = 0;
    Circle *p = pArray;
    for(int i=0; i<n; i++){
    	cout << p->getArea() << ' ';
        if(p->getArea() >= 100 && p->getArea <= 200)
        	count++;
        p++;
        }
    cout << endl << "면적이 100~200 인 원의 개수 : " << count << endl;
    delete [] pArray;
    
}