
#include <iostream>

using namespace std;

int main()
{
	int x = 0, y = 0;

	cout << "Enter one number: ";
	cin >> x;

	cout << "Enter other number: ";
	cin >> y;

	if (x > y) {
		cout << "The max number is: " << x << endl;
	}
	else {
		cout << "The max number is: " << y << endl;
	}

	return 0;

}


