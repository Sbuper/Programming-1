#include <iostream>
using namespace std;

int main()
{
	char employed,
		recentGrad;

	cout << "With either Y for Yes or N for No,\n"; 
	cout << "answer the following questions:\n";
	

	cout << "\nAre you employed?\n";
	cin >> employed;
	cout << "\nhave you graduated from college in the past two years?\n";
	cin >> recentGrad;

	// if/else statement determins the applicants loan qualification
	if (employed == 'Y' && recentGrad == 'Y')		// "&&" means logical "AND" 
		cout << "\nYou qualify for the special interest rate. \n";
	else
	{
		cout << "\nYou must be employed and have graduated from college\n"
			<< "in the past two years to qualify "
			<< "for the special interest rate. \n";
	}
	return 0;
}