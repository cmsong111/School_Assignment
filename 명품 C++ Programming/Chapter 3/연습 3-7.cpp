#include <iostream>

using namespace std;

class Building{
	private:
		int floor;
	public:
		Building();
		Building(int s){
			floor = s;
		};
		int now_flor(){
			return floor;
		}
};

Building::Building():Building(1) {};


int main(void){
	Building twin,star;
	Building bluehouse(5), jangMi(14);

	cout << twin.now_flor() << " " << star.now_flor()<< " "  << bluehouse.now_flor()<< " "  << jangMi.now_flor() << endl;

	return 0;
}