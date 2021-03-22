#include <iostream>
using namespace std;

int main()
{
	const double MIN_INCOME = 35000.0;
	const int MIN_YEARS = 5;

	double income;
	int years;

	cout << "What is your annual income?\n";
	cin >> income;
	cout << "How many years have you worked at your current job?\n";
	cin >> years;

	if (income >= MIN_INCOME || years > MIN_YEARS)
		cout << "You qualify for a loan.\n";
	else
	{
		cout << "\nYou must earn at least $" << MIN_INCOME
			<< " or have been employed \n"
			<< "for more than " << MIN_YEARS << "years "
			<< "\nto qualify for a loan. \n";
	}
	return 0;
}