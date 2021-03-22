#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream data;
	int number;
	int count;

	data.open("SumNum.txt");
	count = 0;
	while (data)
	{
		data >> number;
		if (number > 0)
			count = count + number;
	}
	cout << "The numbrt of non-negative integars is:  " << count << endl;
	return 0;
}