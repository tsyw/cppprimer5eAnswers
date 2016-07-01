#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;

int main()
{	
	vector<int> ivec;
	int inum;

	while(cin >> inum)
		ivec.push_back(inum);

	if(ivec.begin() != ivec.end())
	{
		for(auto it = ivec.cbegin(); it < (ivec.cend() - 1); ++it)
		{
			cout << (*it) + (*(it + 1)) << " ";
		}
		cout << endl;
	}
	else
		cout << "No number!";

	if(ivec.begin() != ivec.end())
	{
		for(auto it = ivec.cbegin(); it != ivec.cend(); ++it)
		{
			cout << (*it) + (*(ivec.cend() - (it - ivec.cbegin()) - 1) )<< " ";
		}
		cout << endl;
	}
	else
		cout << "No number!";

	return 0;
}
