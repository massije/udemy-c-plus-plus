
#include <iostream>

using namespace std;

int main()
{

	int m1 = 0, m2 = 0, m3 = 0;
	float Total, Avg;

	cout << "Enter a number for m1: ";
	cin >> m1;

	cout << "Enter a number for m2: ";
	cin >> m2;

	cout << "Enter a number for m3: ";
	cin >> m3;

	Total = m1 + m2 + m3;
	Avg = Total / 3.0;

	if (Avg >= 60) {
		cout << "A" << endl;
	}
	else if (Avg >= 35 && Avg < 60) {
		cout << "B" << endl;
	}
	else {
		cout << "C" << endl;
	}
	
	return 0;
}


