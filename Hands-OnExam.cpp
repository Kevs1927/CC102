#include <iostream>
using namespace std;

int main ()
{
	double sugarPriceUSD, ricePricePound,  sardinesPricePound, coffeePriceUSD, milkPriceUSD;

	cout << "Price of sugar in USD: ";
	cin >> sugarPriceUSD;
	cout << "Price of rice in Pound: ";
	cin >> ricePricePound;
	cout << "Price of sardines in Pound: ";
	cin >> sardinesPricePound;
	cout << "Price of coffee in USD: ";
	cin >> coffeePriceUSD;
	cout << "Price of sugar in USD: ";
	cin >> milkPriceUSD;
	cout << endl;
	
	int sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	
	cout << "Enter sugar Quantity: ";
	cin >> sugarQty;
	cout << "Enter rice Quantity: ";
	cin >> riceQty;
	cout << "Enter sardines Quantity: ";
	cin >> sardinesQty;
	cout << "Enter coffee Quantity: ";
	cin >> coffeeQty;
	cout << "Enter milk Quantity: ";
	cin >> milkQty;
	cout << endl;
	
	double usdToPhp, poundToPhp;
	
	cout << "Enter USD to Php conversion: ";
	cin >> usdToPhp;
	cout << "Enter Pound to Php conversion: ";
	cin >> poundToPhp;
	cout << endl;
	
	double sugarCostinPhp = sugarPriceUSD * sugarQty * usdToPhp;
	double riceCostinPhp = ricePricePound * riceQty * poundToPhp;
	double sardinesCostinPhp = sardinesPricePound * sardinesQty * poundToPhp;
	double coffeeCostinPhp = coffeePriceUSD * coffeeQty * usdToPhp;
	double milkCostinPhp = milkPriceUSD * milkQty * usdToPhp;
	double totalCostPHP = sugarCostinPhp + riceCostinPhp + sardinesCostinPhp + coffeeCostinPhp + milkCostinPhp;
	
	cout << "Item name:\t\tItem Quantity:\t\tPrice per item in PHP:\t\tTotal cost per item in PHP:\n";
	cout << "sugar:\t\t\t" << sugarQty <<"\t\t\t" << usdToPhp << "\t\t\t\t" << (sugarQty * usdToPhp) << endl;
	cout << "rice:\t\t\t" << riceQty <<"\t\t\t" << poundToPhp << "\t\t\t\t" << (riceQty * poundToPhp) << endl;
	cout << "sardines:\t\t" << sardinesQty <<"\t\t\t" << poundToPhp << "\t\t\t\t" << (sardinesQty * poundToPhp) << endl;
	cout << "coffee:\t\t\t" << coffeeQty <<"\t\t\t" << usdToPhp << "\t\t\t\t" << (coffeeQty * usdToPhp) << endl;
	cout << "milk:\t\t\t" << milkQty <<"\t\t\t" << usdToPhp << "\t\t\t\t" << (milkQty * usdToPhp) << endl;
	cout << "The total amount to be paid in PHP is: " << totalCostPHP;
}
