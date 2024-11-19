#include <iostream>

using namespace std;

int main()
{
	int age;
	cout << "Enter age: ";
	cin >> age;
	cout << ((age<16) ?  "Too young to drive." : ((age==16) ? "Better clear the roads" :  "You are getting pretty old"));
}
