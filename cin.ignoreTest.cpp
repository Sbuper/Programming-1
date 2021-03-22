#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the values as shown" << endl;
	cout << " 1 " << "2 " << "3 " << "4 " << endl;
	cout << " 5 " << "6 " << "7 " << "8 " << endl; 
	cout << " 9" << endl;
	cout << " 2" << endl << endl;

	int a, b, c, d, e, f, g, h;

	cin >> a >> b >> c;
	cin.ignore(80, '\n');
	cin >> d >> e >> f;
	cin.ignore(80, '\n');
	cin >> g >> h;
	cout << endl << " a " << a << "  b " << b << "   c " << c << endl;
	cout << " d " << d << "  e " << e << "   f " << f << endl;
	cout << " g " << g << "  h " << h << endl << endl;
	return 0;
}