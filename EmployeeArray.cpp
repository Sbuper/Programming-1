#include <iostream>
using namespace std;

int main()
{
	const int NUM_EMPLOYEES = 6;
	int hours[NUM_EMPLOYEES];
	int count;

	cout << "Enter the hours worked by " << NUM_EMPLOYEES << " employees:  \n";

	for (count = 0; count < NUM_EMPLOYEES; count++)
		cin >> hours[count];


	cout << "The hours you entered are:  \n";

	for (count = 0; count < NUM_EMPLOYEES; count++)
		cout << hours[count] << " ";

	return 0;
}