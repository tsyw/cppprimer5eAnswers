#include <iostream>
#include <string>

using std::string;
using std::getline;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	string sline, scin;

	getline(cin, sline);
	cout << sline << endl;
	while(cin >> scin)
	{
		cout << scin << endl;
	}

	return 0;
}
