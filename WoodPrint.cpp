#include <iostream>
using namespace std;

int main()
{
	int side;
	int top;
	int inchesOfWood;

	cout << "Enter the vertical dimension of your print." << endl;
	cout << "The dimension should be in whole inches. " << "Press return." << endl;
	cin >> side;

	cout << endl << "Enter the horizontal dimension of your print." << endl;
	cout << "The dimension should be in whole inches. " << "Press return." << endl;
	cin >> top;

	inchesOfWood = top + top + side + side;

	cout << endl << "You need " << inchesOfWood << " inches of wood." << endl;
		return 0;

} 