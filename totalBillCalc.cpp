#include <iostream>
using namespace std;

int main()
{
	float discountRate;
	float shipCost;
	float purchase;
	cout << "Enter purchase price:  ";
	cin >> purchase;


	if (purchase > 100)
	{
		discountRate = 0.25;
		shipCost = 10.00;
	}
	else
	{
		discountRate = 0.15;
		shipCost = 5.00;
	}

	float totalBill = (purchase * shipCost) - (((purchase * shipCost) / 100)*discountRate);
	cout << "\nTotal bill is: $" << totalBill << endl;

}