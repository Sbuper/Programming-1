#include <iostream>
using namespace std;

int main()
{
	int count = 1;
	cout << " " << "Number" << "  " << "Square" << endl;
	cout << "---------------" << endl;
	while (count < 6)
	{
		cout << "    " << count << "       " << count * count << endl;
		count++;
	}
	cout << "\nDone.\n" << endl;
	return 0;
}