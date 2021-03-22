#include <iostream>
#include <cmath>
using namespace std;

//Circle class declaration.
class Circle
{
private:
	double radius;		// This is a member variable

public:
	void  setRadius(double);		//these are just prototypes for the member functions
	double calcArea();
};

//This function copies the argument passed into the parameter to the private member variable radius.
void Circle::setRadius(double r)
{
	radius = r;
}

//This functions calculates and returns the Circle object's area.
//It does not need any parameters because it already has access to the member variable radius.
double Circle::calcArea()
{
	return 3.14 * pow(radius, 2);
}

//Main function
int main()
{
	Circle circle1,		//Defines 2 circle objects
		circle2;

	circle1.setRadius(1);		//This sets circle 1's radius to 1.0
	circle2.setRadius(2.5);		//This sets circle 2's radius to 2.5

	cout << "The area of the circle is " << circle1.calcArea() << endl;
	cout << "The area of the circle is " << circle2.calcArea() << endl;

	return 0;
}