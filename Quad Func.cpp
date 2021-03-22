//Quadratic equation
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	const int a = 2;
	const int b = -2, c = -2;
	float d, e, f;

	d = sqrt(b * b - 4.0 * a * c);
	e = -b + d / (2 * a);
	f = -b - d / (2 * a);

	cout << "One root is " << e << ".\n" << "Another root is " << f << ".\n";

	getchar();
	return 0;
}