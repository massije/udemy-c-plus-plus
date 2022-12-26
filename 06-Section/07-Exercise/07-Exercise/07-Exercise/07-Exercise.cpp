

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a = 0, b = 0, c = 0, d = 0, r1 = 0, r2 = 0;

    cout << "Enter a number for a: ";
    cin >> a;

    cout << "Enter a number for b: ";
    cin >> b;

    cout << "Enter a number for c: ";
    cin >> c;

    //discriminant
    d = pow(b, 2) - 4 * a * c;

    if (d == 0) {
        r1 = -b / (2 * a);
        cout << "real and equal " << r1 << endl;
    }
    else if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);

        cout << "real and unequal " << r1 << " " << r2 << endl;
    }
    else {
        cout << "imaginary" << endl;
    }


    return 0;

}


