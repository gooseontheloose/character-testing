#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
	char myChar = ' ';
	string msg = "You enter a ";


	do
	{
		cout << "Please enter a  character, or type 0 to exit: ";
		cin.get(myChar);
		cin.ignore(50, '\n');

		if (isalpha(myChar))
			cout << msg << "alphabetical character.\n";
	
		if (isdigit(myChar))
			cout << msg << "number.\n";

		if (islower(myChar))
			cout << msg << "lowercase letter.\n";

		if (isupper(myChar))
			cout << msg << "uppercase letter.\n";

		if (ispunct(myChar))
			cout << msg << "special character.\n";

		if (isspace(myChar))
			cout << msg << "whitepsace character.\n";

	} while (myChar != '0');

	system("pause");
	return 0;
}