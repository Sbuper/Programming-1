#include <iostream>
#include <string>
using namespace std;
void DisplayMessage(int	n);

int main()
{
	DisplayMessage(15);
	cout << "Good Bye" << endl;
	getchar();
	return 0;
}

void DisplayMessage(int	n)
{
	cout << "I have liked math for " << n << " years." << endl;
}