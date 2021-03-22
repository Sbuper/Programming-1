#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	float myNumber = 123.4587;
	cout << fixed << showpoint;
	cout << "My number is " << setprecision(3) << myNumber << endl;
	getchar();
	return 0;

}