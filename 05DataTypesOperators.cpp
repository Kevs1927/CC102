#include <iostream>
using namespace std;

int main ()
{
	double num1, num2, Remainder;
	int Quotient;
	
	cout << "Enter number 1: ";
	cin >> num1;
	
	cout << "Enter number 2: ";
	cin >> num2;
	
	Quotient = num1 / num2;
	Remainder = num1 - (Quotient * num2);
	
	cout << "Sum: " << num1 + num2 << endl;
	cout << "Difference: " << num1 - num2 << endl;
	cout << "Quotient: " << Quotient << endl;
	cout << "Product: " << num1 * num2 << endl;
	cout << "Remainder: " << Remainder << endl;
	return 0;
	
}
