#include <iostream>
using namespace std;

class Demo
{
public:
	Demo();		//Constructor
	~Demo();	//Destructor
};

Demo::Demo()
{
	cout << "An object has just been defined, so the constructor is running. \n";
}

Demo::~Demo()
{
	cout << "Now the deconstructor is running. \n";
}

int main()
{
	Demo demoObj;

	cout << "The object now exists, but it is about to be destroyed. \n";

	return 0;
}