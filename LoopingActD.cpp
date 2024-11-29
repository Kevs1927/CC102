#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter number: ";
	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		for (int z = i; z >= 1; z--) {
			cout << z << " ";
		}
		cout << endl;
	}
	return 0;
}
