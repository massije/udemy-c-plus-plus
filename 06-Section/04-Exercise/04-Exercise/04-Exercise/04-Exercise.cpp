
#include <iostream>

using namespace std;

int main()
{
    int age = 0;
    
    cout << "Enter a age: ";
    cin >> age;

    if (age >= 12 && age <= 50) {
        cout << "Young" << endl;
    }
    else {
        cout << "Not young" << endl;
    }

    return 0;
}


