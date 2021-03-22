#include <iostream>
using namespace std;

int main()
{
	int sum;
	int dataValue;
	sum = 0;
	cout << "To stop processing, enter a negative value." << endl;
	cout << "Enter an integer value; press return." << endl;
	cin >> dataValue;

	while (dataValue > 0)
	{
		sum = sum + dataValue;
		cout << "\nEnter an integer value; press return." << endl;
		cin >> dataValue;
	}
	cout << "Sum is " << sum << "." << endl;
	return 0;
}