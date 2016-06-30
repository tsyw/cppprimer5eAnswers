#include <iostream>
#include <string>

using std::cout; using std::cin;
using std::string; using std::getline;
using std::endl;

int main()
{
	string s1, s2;

	cout << "Enter two string: " << endl;
	cin >> s1 >> s2;

	if(s1 == s2)
	{
		cout << s1 << endl;
	}
	else
	{
		if(s1 > s2)
			cout << s1 << endl;
		else
			cout << s2 << endl;
	}

	if(s1.size() == s2.size())
	{
		cout << "length is the same!";
	}
	else
	{
		if(s1.size() > s2.size())
			cout << s1 << endl;
		else
			cout << s2 << endl;
	}

	return 0;
}
