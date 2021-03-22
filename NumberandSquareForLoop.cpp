#include <iostream>
using namespace std;

int main()
{
	int count;

	cout << "Number    Square\n";
	cout << "----------------\n";
	for (count = 1; count < 6; count++)
	{
		cout << "   " << count << "        " << (count*count) << endl;
	}
	return 0;
}