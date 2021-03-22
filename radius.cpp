// Program to compute radius of circle using the Circumference 
#include <iostream>
using namespace std;

int main()
{
	const double Circumference = 17;
	double Radius;
	
	Radius = Circumference / (2 * 3.14);
	cout << "The radius is " << Radius << endl;

	getchar();
	return 0;
}