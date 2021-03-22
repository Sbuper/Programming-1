#include <iostream>
using namespace std;

const int OUNCES = 9540;

int main()
{
	int cups;
	int quarts;
	int gallons;
	cups = OUNCES / 8;
	cout << OUNCES << " ounces is " << cups
		<< " cups and" << OUNCES % 8 << " ounces."
		<< endl;

	quarts = cups / 4;

	cout << OUNCES << " ounces is " << quarts
		<< cups % 4 * 8 + OUNCES % 8 << " ounces."
		<< endl;

	gallons = OUNCES / 128;

	cout << OUNCES << " ounces is " << gallons
		<< " gallons and " << OUNCES % 128
		<< " ounces." << endl;

	getchar();

	return 0;
}