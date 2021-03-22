//Program to compute and show the low and high costs
#include <iostream>
using namespace std;

int main()
{
	float loCost;
	float hiCost;

	loCost = 12.342;
	hiCost = 12.348;

	loCost = float(int(loCost *100.0 + 0.5)) / 100.0;

	hiCost = float(int(hiCost *100.0 + 0.5)) / 100.0;

	cout << "The low cost is " << loCost << ", "
		<< "and the high cost is " << hiCost << ".";

		
	getchar();
	return 0;
}