#include <iostream>

using namespace std;

int main ()
{
	int response;
	cout << "What is the Temperature outside?: ";
	cin >> response;
	if (response <= 32) {
		cout << "Bring a heavy jacket";
	}
	else if (response == 32 || response <= 50) {
		cout << "Bring light jacket";
	}
	else if (response > 50) {
		cout << "No need to bring jacket";
	} 
	return 0;
}
