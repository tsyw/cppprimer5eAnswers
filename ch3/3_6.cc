#include <iostream>
#include <string>

using std::cout; using std::endl;
using std::string;

int main()
{
	string s1("a string");

	cout << s1 << endl;

	for(auto &c : s1)
	{
		c = 'X';
	}

	cout << s1 << endl;

	return 0;
}
