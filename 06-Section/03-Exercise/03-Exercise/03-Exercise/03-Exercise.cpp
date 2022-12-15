
#include <iostream>

using namespace std;

int main()
{
	int number = 0;

	cout << "Enter a number: ";
	cin >> number;

	if (number % 2 == 0) {
		cout << "even" << endl;
	}
	else {
		cout << "odd" << endl;
	}

	return 0;
   
}

