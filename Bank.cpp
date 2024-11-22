#include <iostream>

using namespace std;

int main()
{
	char accType; 
	string accLevel;
	double accBal, interestR;
	cout << "Enter account type (P-Personal, B-Business): ";
	cin >> accType;
	cout << "Enter account level (Standard/Gold/Platinum): ";
	cin >> accLevel;
	cout << "Enter your balance: $";
	cin >> accBal;
	interestR = (accType == 'P' || accType == 'p') ? 
				((accLevel == "Standard") ? 1.2 :(accLevel == "Gold" ? (accBal >= 1000 && accBal < 5000 ? 1.9 : (accBal >= 5000 ? 2.3 : 0)) : 0)) :
				(accType == 'B' || accType == 'b') ?
				(accLevel == "Standard" && accBal >= 1500) ? 1.7 : (accLevel == "Platinum" && accBal >= 10000 ? 2.5 : 0) : 0;
	if (interestR > 0) {
		cout << "Your interest rate is: " << interestR << "%" << endl;
	}
	else {
		cout << "Invalid input or balance does not quality for a rate!";
	}
	return 0;
}
