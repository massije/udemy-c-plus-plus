

#include <iostream>

using namespace std;

int main()
{
    int age = 0;

    cout << "Enter a age: ";
    cin >> age;

    if (age <= 12 || age >= 50) {
        cout << "eligible" << endl;
    }
    else {
        cout << "not eligible" << endl;
    }

    return 0;

}


