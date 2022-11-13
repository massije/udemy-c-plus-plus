
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;
    float r1 = 0, r2 = 0;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;

    r1 = (float)(-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    r2 = (float)(-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

    cout << "Roats are:" << endl << "r1 = " << r1 << endl << "r2 = " << r2 << endl;

    return 0;
    
}


