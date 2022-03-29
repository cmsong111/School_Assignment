#include <iostream>
#include <string>

using namespace std;

class Date
{
    int Year, Month, Day;

public:
    int getYear();
    int getMonth();
    int getDay();
    void show();

    Date(int Y, int M, int D);
    Date(string arr);
};

Date::Date(int Y, int M, int D) {
    Year = Y;
    Month = M;
    Day = D;
}

Date::Date(string arr) {
    int ind;
    Year = stoi(arr);
    ind = arr.find('/');
    Month = stoi(arr.substr(ind + 1));
    ind = arr.find('/', ind + 1);
    Day = stoi(arr.substr(ind + 1));
}


int Date::getDay() {
    return Day;
}

int Date::getMonth() {
    return Month;
}

int Date::getYear() {
    return Year;
}

void Date::show() {
    cout << Year << "년" << Month << "월" << Day << "일" << endl;
}




int main(void)
{
    Date birth(2014, 3, 20);
    Date independenceDay("1945/8/15");
    independenceDay.show();
    cout << birth.getYear()<< ", " << birth.getMonth() << ", " << birth.getDay() << endl;
}