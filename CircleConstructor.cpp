#include <iostream>
#include <cmath>
using namespace std;

//Circle class declaration
class Circle
{
private:
	double radius;

public:		//Member function prototype
	Circle();
	void setRadius(double);
	double calcArea();
};


//This is the constructor. It initializes the radius class member variable.
Circle::Circle()
{
	radius = 1.0;
}


//This function validates the value pressed to it before assigning it to the radius member variable.
void Circle::setRadius(double r)
{
	if (r >= 0.0)
		radius = r;
}


//This function calculates and returns the Circle object's area. It does not need any parameters because it can directly access the member variable radius.
double Circle::calcArea()
{
	return 3.14 * pow(radius, 2);
}


//The main function creates and uses 2 circle objects.
int main()
{
	Circle circle1;

	Circle circle2;
	circle2.setRadius(2.5);

	cout << "The are of circle1 is " << circle1.calcArea() << endl;
	cout << "The are of circle2 is " << circle2.calcArea() << endl;

	return 0;
}