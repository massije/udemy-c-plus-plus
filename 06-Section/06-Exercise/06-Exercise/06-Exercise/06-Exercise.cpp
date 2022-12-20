

#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0, c = 0;

	cout << "Enter number 1: ";
	cin >> a;

	cout << "Enter number 2: ";
	cin >> b;

	cout << "Enter number 3: ";
	cin >> c;

	if (a > b && a > c) {
		cout << a << endl;
	}
	else if (b > c) {
		cout << b << endl;
	}
	else {
		cout << c << endl;
	}

	return 0;

}


