#include <iostream>
using namespace std;

int main()
{
	int count = 1;
	int userCount;
	cout << "Pick a number to end at:    ";
	cin >> userCount;
	cout << "\n " << "Number" << "  " << "Square" << endl;
	cout << "---------------" << endl;
	while (count <= userCount)
	{
		cout << "    " << count << "       " << count * count << endl;
		count++;
	}
	cout << "\nDone.\n" << endl;
	return 0;
}