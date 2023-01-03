#include <iostream>

using namespace std;

int main() {

    int year;

    cout << "Enter a year: ";
    cin >> year;

    if(year % 4 == 0 && (year % 100 != 0 ||year % 400 == 0)){
        cout << "es bisiesto" << endl;
    }else{
        cout << "no es bisiesto" << endl;
    }
    
    return 0;
}
