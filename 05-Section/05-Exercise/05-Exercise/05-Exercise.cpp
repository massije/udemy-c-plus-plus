
#include <iostream>

using namespace std;

int main()
{
    int P, T, R;
    float SI;

    cout << "Introduce the principle amount --> P: ";
    cin >> P;

    cout << "Introuce the time --> T: ";
    cin >> T;

    cout << "Introduce the rate of interest --> R: ";
    cin >> R;

    SI = P * T * R / 100;

    cout << "The simple interest is: " << SI << endl;

    return 0;
}
