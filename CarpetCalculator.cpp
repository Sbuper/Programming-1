#include <iostream>
using namespace std;

class Rectangle
{
private:
	double length;
	double width;

public:
	void setLength(double len)
	{
		length = len;
	}

	void setWidth(double wid)
	{
		width = wid;
	}

	double getLength()
	{
		return length;
	}

	double getWidth()
	{
		return width;
	}

	double getArea()
	{
		return length * length;
	}
};

class Carpet
{
private:
	double PricePerSqYd;
	Rectangle size;

public:
	void setPricePerSqYd(double n)
	{
		PricePerSqYd = n;
	}

	void setDimensions(double len, double wid)
	{
		size.setLength(len / 3);
		size.setWidth(wid / 3);
	}

	double getTotalPrice()
	{
		return (size.getArea() * PricePerSqYd);
	}

};

int main()
{
	Carpet purchase;
	double pricePerYd;
	double length;
	double width;

	cout << "Room lengths in feet:  ";
	cin >> length;
	cout << "Room width in feet:    ";
	cin >> width;
	cout << "Carpter prices per sq. yard: ";
	cin >> pricePerYd;

	purchase.setDimensions(length, width);
	purchase.setPricePerSqYd(pricePerYd);

	cout << "\nThe total price of my new " << length << " x " << width
		<< " carpet is $" << purchase.getTotalPrice() << endl;

	return 0;
}