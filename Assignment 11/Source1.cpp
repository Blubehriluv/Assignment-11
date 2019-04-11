#include "Header.h"
#include <iostream>
#include <string>

using namespace std;

void moreSpace()
{
	cout << "\n\n\n";
}

void main()
{
	system("color 4E");
	moreSpace();
	cout << "Welcome to the circus." << endl;
	system("Pause");

	moreSpace();
	PrintOutCircusActs();

	system("color 4E");
	moreSpace();
	PrintEmployees();
	system("Pause");
}