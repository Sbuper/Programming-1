#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double ADULT_RATE = 120.0;
	const double CHILD_RATE = 60.0;
	const double SENIOR_RATE = 100.0;

	int choice;
	int months;
	double charges;

	do
	{
		cout << "\n   Health Club Membership Menu\n\n";
		cout << "1.  Standard Adult Membership\n";
		cout << "2.  Child Membership\n";
		cout << "3.  Senior Membership\n";
		cout << "4.  Quit The Program\n";
		cin >> choice;

		while ((choice < 1) || (choice > 4))
		{
			cout << "That is not a valid option, please enter a value between 1-4:  ";
			cin >> choice;
		}

		if (choice != 4)
		{
			cout << "How many months would you like to subscribe for?   ";
			cin >> months;
		}
		
		switch (choice)
		{
		case 1: 
			charges = (months * ADULT_RATE);
			break;
		case 2:
			charges = (months * CHILD_RATE);
			break;
		case 3:
			charges = (months * SENIOR_RATE);
			break;
		}

		cout << fixed << showpoint << setprecision(2);
		cout << "Total charges are  $" << charges << endl;
	} while (choice != 4);

	return 0;
}