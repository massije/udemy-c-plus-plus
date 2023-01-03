#include <iostream>

using namespace std;

int main() {

    int x, y, result, choice;

    cout << "1.- Add 2 numbers\n" << "2.- Subtract 2 numbers\n" << "3.- Multiply 2 numbers\n" << "4.- Divide 2 numbers\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter number one: ";
    cin >> x;

    cout << "Enter number two: ";
    cin >> y;

    switch(choice){
        case 1:
            result = x + y;
            cout << result;
            break;
        case 2:
            result = x - y;
            cout << result;
            break;
        case 3:
            result = x * y;
            cout << result;
            break;
        case 4:
            result = x / y;
            cout << result;
            break;
        default: cout << "Invalid number choice";
    }

    return 0;
}
