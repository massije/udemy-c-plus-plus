
#include <iostream>

using namespace std;

int main()
{
	int amount = 0, decimalOffer = 0;
	float disAmount = 0, offer = 0;

	cout << "Enter a amount: ";
	cin >> amount;
	cout << endl;

	if (amount >= 5000) {
		offer = 0.2;
		decimalOffer = 20;
	}
	else if (amount >= 2000 && amount < 5000) {
		offer = 0.1;
		decimalOffer = 10;
	}
	else {
		offer = 0.05;
		decimalOffer = 5;
	}

	disAmount = amount - (amount * offer);

	cout << "Original amount: " << amount << endl;
	cout << "Has been discounted: " << decimalOffer << "%" << endl;
	cout << "Final amount: " << disAmount << endl;

	return 0;
}
