#include <iostream>
using namespace std;

int main()
{
	int DoW;
	char rain;
	cout << "Enter the current day of the week: \n(Input as number (1 - 7), where Mon is 1 and Sun is 7)\n";
	cin >> DoW;
	cout << "Also, is it raining? (Y or N)\n";
	cin >> rain;

	if (rain == 'Y')
	{
		if ((DoW <= 5) && (DoW > 0))
			cout << "You will go to school, and take an umbrella.";
		else if ((DoW == 6) || (DoW == 7))
			cout << "You will stay in bed and read a book.";
		else
			cout << "You didn't enter a number between (1 - 7) when asked what day it was!";
	}
	else if (rain == 'N')
	{
		if ((DoW <= 5) && (DoW > 0))
			cout << "You will go to school, without an umbrella.";
		else if ((DoW == 6) || (DoW == 7))
			cout << "You will stay go outside and have fun.";
		else
			cout << "You didn't enter a number between (1 - 7) when asked what day it was!";
	}
	else
		cout << "You didn't enter 'Y' or 'N' when asked if it's raining!";
	
	cout << "\n \n";
	return 0;
}