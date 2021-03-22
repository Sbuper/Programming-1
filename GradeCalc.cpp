#include <iostream>
using namespace std;

int main()
{
	const int MIN_A_SCORE = 90,
		MIN_B_SCORE = 80,
		MIN_C_SCORE = 70,
		MIN_D_SCORE = 60;

	int testScore;
	char grade;

	cout << "Enter your numeric test score and I will\n";
	cout << "tell you the letter grade you earned: ";
	cin >> testScore;

	if (testScore >= MIN_A_SCORE)
		grade = 'A';
	if (testScore >= MIN_B_SCORE)
		grade = 'B';
	if (testScore >= MIN_C_SCORE)
		grade = 'C';
	if (testScore >= MIN_D_SCORE)
		grade = 'D';
	if (testScore >= 0)
		grade = 'F';

	cout << "Your grade is " << grade << ".\n";

	return 0;
}