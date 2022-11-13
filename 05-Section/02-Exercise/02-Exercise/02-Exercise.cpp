
#include <iostream>

using namespace std;

int main()
{
    int sum = 0, number = 0;

    cout << "Enter a number: " << endl;
    cin >> number;

    sum = number * (number + 1) / 2;

    cout << "The sum is: " << sum << endl;
    
    return 0;
}


