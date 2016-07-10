#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl;
using std::string;

int main()
{
	string sval1, sval2;
	do
	{
		cin >> sval1 >> sval2;
		if(sval1.size() != sval2.size())
		{
			cout << ((sval1.size() > sval2.size()) ? sval2 : sval1) << endl;
		}
		else
			cout << "the length of " << sval1 << " and " << sval2 << " is the same!" << endl;
	}while(cin);

	return 0;
}
