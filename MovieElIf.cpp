#include <iostream>

using namespace std;

int main()
{
	int age;
	bool parents;
	double money;
	char time;
	cout << "Enter age: ";
	cin >> age;
	cout << "Enter money: ";
	cin >> money;
	if (age < 13) {
		cout << "With parents?: ";
		cin >> parents;
		cout << ((parents) ? "Rated g" : "Rated g, pg")<<endl;
	}
	else if (age>=13 && age<16) {
		cout << "With parents?: ";
		cin >> parents;
		cout << ((parents) ? "Rated g,pg" : "Rated g, pg or r") <<endl;
	}
	cout<< ((money<7.50)? "Not enough money!": ((money<10.50)? "Can go to matinee show!": "Can go to metinee or evening!"))<<endl;
}
