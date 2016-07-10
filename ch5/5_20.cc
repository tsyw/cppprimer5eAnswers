#include <iostream>
#include <string>

using std::string;
using std::cout; using std::cin; using std::endl;

int main()
{
	string sval, sval2;
	if(cin >> sval && !sval.empty())
	{
		while(cin >> sval2 && !sval2.empty())
		{
			if(sval == sval2)
			{
				cout << sval << " occurs twice." << endl;
				break;
			}
			else
				sval = sval2;
		}
	}
	else
		cout << "No Input!" << endl;

	return 0;
}
