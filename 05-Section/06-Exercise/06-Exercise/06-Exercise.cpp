

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int radius = 0, height = 0;
    float pi = 3.14 ,volume = 0;

    cout << "Enter the radius: ";
    cin >> radius;

    cout << "Enter the height: ";
    cin >> height;

    volume = pi * pow(radius, 2) * height;

    cout << "The volume is: " << volume << endl;

    return 0;
}
