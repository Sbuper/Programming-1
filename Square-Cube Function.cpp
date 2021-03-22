#include <iostream>

int Square(int);
int Cube(int);
using namespace std;

int main()
{
	cout << "The square of 27 is "
		<< Square(27) << endl;

	cout << "The cube of 27 is "
		<< Cube(27) << endl;

	getchar();

	return 0;
}
int Square(int a)
{
	return a * a;
}
int Cube(int b)
{
	return b * b * b;
}
