#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main()
{

	cout << setw(10) << "*"
		<< setw(9) << "*"
		<< setw(8) << "*"
		<< setw(7) << "*"
		<< setw(6) << "*"
		<< setw(5) << "*"
		<< setw(4) << "*"
		<< setw(3) << "*"
		<< setw(2) << "*"
		<< setw(1) << "*"
		<< setw(0) << "*";

	getchar();
	return 0;
}