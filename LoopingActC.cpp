#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "How many rows: ";
	cin >> n;
	for (int i = n; i >= 1; i--) {
		for (int k = n-i; k > 0; k--) {
			cout << " ";
		}
		for (int j = i; j > 0; j--) {
			cout << "#";
		}
		cout << endl;
	}
}
