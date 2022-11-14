

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int u, v, a;
	float speed;

	cout << "Enter 3 numbers: ";
	cin >> u >> v >> a;

	speed = (float)(pow(v, 2) - pow(u, 2)) / (2 * a);

	cout << "The speed is: " << speed << endl;

	return 0;
}

