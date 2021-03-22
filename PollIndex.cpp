#include <iostream>
using namespace std;

void PollIndex(int);
int main(void)
{
	int pollution;
	cout << "Enter the current pollution index: ";
	cin >> pollution;

	PollIndex(pollution);

	return 0;

}

void PollIndex(int pollution)
{
	
	if (pollution < 35)
		cout << "Air quality is: Pleasent";

	else if (pollution > 60)
		cout << "Air quality is: Hazardous to health";

	else
		cout << "Air quality is: Unpleasent";

	cout << "\n\n";

}
