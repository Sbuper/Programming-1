#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int lineNo;
	char character;
	int number;
	ifstream inData;
	inData.open("Data.In");

	lineNo = 0;
	inData.get(character);
	while (inData)
	{
		lineNo++;
		number = 0;
		while (character != '\n')
		{
			number++;
			inData.get(character);
		}
		cout << "Line" << lineNo << " contains "
			<< number << " characters" << endl;
		inData.get(character);
	}
	return 0;
}
