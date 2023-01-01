

#include <iostream>

using namespace std;

int main()
{
	int m = 0;

	cout << "Enter a month: ";
	cin >> m;
	cout << endl;

	if (m == 1) {
		cout << "jan" << endl;
	}
	else if (m == 2) {
		cout << "feb" << endl;
	}
	else if (m == 3) {
		cout << "mar" << endl;
	}
	else if (m == 4) {
		cout << "apr" << endl;
	}
	else if (m == 5) {
		cout << "may" << endl;
	}
	else if (m == 6) {
		cout << "jun" << endl;
	}
	else if (m == 7) {
		cout << "jul" << endl;
	}
	else if (m == 8) {
		cout << "aug" << endl;
	}
	else if (m == 9) {
		cout << "sep" << endl;
	}
	else if (m == 10) {
		cout << "oct" << endl;
	}
	else if (m == 11) {
		cout << "nov" << endl;
	}
	else {
		cout << "dec" << endl;
	}

	return 0;
}

