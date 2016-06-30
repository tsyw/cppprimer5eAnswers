#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cin;

int main()
{
	string s;
	vector<string> svec;

	while(cin >> s)
	{
		svec.push_back(s);
	}

	return 0;
}
