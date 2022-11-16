

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    float dist = 0;

    cout << "Enter point x1: ";
    cin >> x1;

    cout << "Enter point x2: ";
    cin >> x2;

    cout << "Enter point y1: ";
    cin >> y1;

    cout << "Enter point y2: ";
    cin >> y2;


    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "The distance between 2 points is: " << dist << endl;

    return 0;
}


