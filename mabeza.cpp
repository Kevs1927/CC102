#include <iostream>

using namespace std;

int main ()
{
	double sPU = 0.0, rPP =0.0, sPP = 0.0, cPU = 0.0, mPU =0.0;
	double uTP =0.0, pTP = 0.0;
	double sQ, rQ, sdQ, cQ, mQ;
	double tCP;
	
	cout << "usdToPhp: ";
	cin >> uTP;
	cout << "poundToPhp: ";
	cin >> pTP;
	
	cout << "sugarQty: ";
	cin >> sQ;
	cout << "Price of each sugar in USD is : " << uTP << endl;
	sQ = sQ * uTP;
	cout << "The total price of Sugar in peso is: " << sQ << endl;
	
	cout << "riceQty: ";
	cin >> rQ;
	cout << "Price of each rice in pound is : " << pTP << endl;
	rQ = rQ * pTP;
	cout << "The total price of rice in peso is: " << rQ << endl;
	
	cout << "sardinesQty: ";
	cin >> sdQ;
	cout << "Price of each sugar in pound is : " << pTP << endl;
	sdQ = sdQ * pTP;
	cout << "The total price of sardines in peso is: " << sdQ << endl;
	
	cout << "coffeeQty: ";
	cin >> cQ;
	cout << "Price of each sugar in USD is : " << uTP << endl;
	cQ = cQ * uTP;
	cout << "The total price of coffee in peso is: " << cQ << endl;
	
	cout << "milkQty: ";
	cin >> mQ;
	cout << "Price of each sugar in USD is : " << uTP << endl;
	mQ = mQ * uTP;
	cout << "The total price of milk in peso is: " << mQ << endl;
	
	tCP = sQ + rQ + sdQ + cQ + mQ;
	cout << "The total amount you need to pay in php is: " << tCP;
	return 0;
}