#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cout; using std::cin; using std::endl;
using std::isupper;

int main()
{
	string sval, sval2;
	bool twice = false;
	if(cin >> sval && !sval.empty())
	{
		while(cin >> sval2 && !sval2.empty())
		{
			if(!isupper(sval2[0]))
			{
				continue;
			}
			else if(sval == sval2)
			{
				cout << sval << " occurs twice." << endl;
				twice = true;
				break;
			}
			sval = sval2;
		}
		if(!twice)
		cout << "No repeated words!" << endl;
	}
	else
		cout << "No Input!" << endl;

	return 0;
}
