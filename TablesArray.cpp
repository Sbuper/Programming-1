#include <iostream>
#include <iomanip>
using namespace std;

const int NUM_COLS = 4;
const int TBL1_ROWS = 3;
const int TBL2_ROWS = 4;

int main()
{
	int table1[TBL1_ROWS][NUM_COLS] = { { 1, 2, 3, 4 },
	{ 5, 6, 7, 8 },
	{ 9, 10, 11, 12 } };

	int table2[TBL2_ROWS][NUM_COLS] = { { 10, 20, 30, 40 },
	{ 50, 60, 70, 80 },
	{ 90, 100, 110, 120 },
	{ 130, 140, 150, 160 } };

	int row, col;
	cout << "The contents of table one are:\n";

	for (int row = 0; row < TBL1_ROWS; row++)
	{
		for (int col = 0; col < NUM_COLS; col++)
		{
			cout << setw(5) << table1[row][col] << " ";
		}
		cout << endl;
	}

	cout << "\nThe contents of table two are:\n";

	for (int row = 0; row < TBL2_ROWS; row++)
	{
		for (int col = 0; col < NUM_COLS; col++)
		{
			cout << setw(5) << table2[row][col] << " ";
		}
		cout << endl;
	}
	return 0;
}