#include <iostream>

using namespace std;

int main() {

    int day;

    cout << "Enter a day number: ";
    cin >> day;

    switch (day) {
        case 1:
            cout << "sun" << endl;
            break;
        case 2:
            cout << "mon" << endl;
            break;
        case 3:
            cout << "tue" << endl;
            break;
        case 4:
            cout << "wed" << endl;
            break;
        case 5:
            cout << "thur" << endl;
            break;
        case 6:
            cout << "fri" << endl;
            break;
        case 7:
            cout << "sat" << endl;
            break;
        default: cout << "Invalid day number" << endl;
    }

    return 0;
}
