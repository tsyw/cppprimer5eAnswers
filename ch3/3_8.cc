#include <iostream>
#include <string>

using std::string;
using std::cout; using std::endl;

int main()
{
	string s1("a string");

	cout << s1 << endl;

	for(decltype(s1.size()) i = 0; i < s1.size(); ++i)
	{
		s1[i] = 'X';
	}

	cout << s1 << endl;

	s1 = "a string";

	cout << s1 << endl;

	decltype(s1.size()) j = 0;

	while(j < s1.size())
	{
		s1[j] = 'X';
		++j;
	}

	cout << s1 << endl;

	return 0;//In my opinion, using range for statement is better, because we should declare a new variable when using while or for loop
}
