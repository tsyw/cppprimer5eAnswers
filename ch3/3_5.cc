#include <iostream>
#include <string>

using std::cout; using std::cin; using std::endl;
using std::string; using std::getline;

int main()
{
	string s, sSum, sSum2;

	while(cin >> s)
	{
		sSum += s;
		sSum2 = sSum2 + s +  " ";
	}

	cout << sSum << endl;
	cout << sSum2 << endl;

	return 0;
}
