#include <iostream>
using namespace std;

int main()
{

	float weightInPounds;
	char weightUnit;

	cout << "How many pounds?   ";
	cin >> weightInPounds;
	cout << "Convert to pounds (P), Ounces (O), or Grams (G)?   ";
	cin >> weightUnit;

	switch (weightInPounds, weightUnit)
	{
	case 'G':
	case 'g':
		cout << "Result is:  " << 454.0 * weightInPounds << "g" << endl;
		break;
	case 'O':
	case 'o':
		cout << "Result is:  " << 16.0 * weightInPounds << "oz" << endl;
		break;
	case 'P':
	case 'p':
		cout << "Result is:  " << 16.0 * weightInPounds << "lb" << endl;
		break;
	}
	return 0;

}