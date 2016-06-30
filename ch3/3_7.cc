#include <iostream>
#include <string>

using std::cout; using std::endl;
using std::string;

int main()
{
	string s1("a string");

	cout << s1 << endl;

	for(char &c : s1)
	{
		c = 'X';
	}

	cout << s1 << endl;//the result is the same

	return 0;
}
