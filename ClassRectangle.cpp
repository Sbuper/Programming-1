#include <iostream>
using namespace std;


//Rectangle class decleration
class Rectangle
{
private:
	double length;
	double width;

public:
	void setLength(double);
	void setWidth(double);
	double getLength();
	double getWidth();
	double calcArea();
};


//This function sets the value of the member variable length.
//If the argument passed to the function is zero or great, it is copied into length.
//If it is negative, 1.0 is assigned to length.
void Rectangle::setLength(double len)
{
	if (len >= 0.0)
		length = len;
	else
	{
		length = 1.0;
		cout << "Invalid length. using a default value of 1.0\n";
	}
}


//This function setes the value of the member variable width.
//If the argument passed to the function is zero or greater, it is copied in width.
//If it is negative, 1.0 is assigned to width.
void Rectangle::setWidth(double w)
{
	if (w >= 0.0)
		width = w;
	else
	{
		width = 1.0;
		cout << "Invalid width. using a default value of 1.0\n";
	}
}


//This function returns the value in member variable length.
double Rectangle::getLength()
{
	return length;
}

//This function returns the value in member variable width.
double Rectangle::getWidth()
{
	return width;
}

//This function calculates and returns the area of the rectangle.
double Rectangle::calcArea()
{
	return length * width;
}


//Main function.
int main()
{
	Rectangle box;
	double boxLength, boxWidth;

	cout << "Thiw program will calculates the area of a ractangle.\n";
	cout << "What is the length?  ";
	cin >> boxLength;
	cout << "What is the width?  ";
	cin >> boxWidth;

	box.setLength(boxLength);
	box.setWidth(boxWidth);

	cout << "\nHere is the rectangles data:\n";
	cout << "Length:  " << box.getLength() << endl;
	cout << "Width:  " << box.getWidth() << endl;
	cout << "Area:  " << box.calcArea() << endl;

	return 0;

}