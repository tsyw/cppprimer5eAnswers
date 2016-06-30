#include <iostream>
#include <string>
#include <cctype>

using std::string; using std::getline;
using std::cout; using std::cin; using std::endl;
using std::ispunct;

int main()
{
	string s;

	getline(cin, s);

	for(auto c : s)
	{
		if(!ispunct(c))
			cout << c;
	}
	cout << endl;

	return 0;
}
