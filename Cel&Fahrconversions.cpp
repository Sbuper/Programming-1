//converting celsius into fahrenheit.
#include <iostream>
using namespace std;

int Fahr2Cel(int n);
int Cel2Fahr(int n);

int main()
{
	cout << "Temp 32 in Fahrenheit is " << Fahr2Cel(32) << " in Celsius.\n";
	cout << "Temp 0 in Celsius is" << Cel2Fahr(0) << " in Fahrenheit.\n";

	getchar();

	return 0;
}
int Fahr2Cel(int n)
{
	return 5 * (n - 32) / 9;
}
int Cel2Fahr(int n)
{
	return 5 * (n / 5) + 32;
}