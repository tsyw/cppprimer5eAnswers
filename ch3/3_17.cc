#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::string;
using std::vector;
using std::cin; using std::cout; using std::endl;
using std::toupper;

int main()
{
	vector<string> svec;
	string s;

	while(cin >> s)
		svec.push_back(s);

	for(auto &cs : svec)
		for(auto &c : cs)
			c = toupper(c);

	for(auto s : svec)
		cout << s << endl;

	return 0;
}
