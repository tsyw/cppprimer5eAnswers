#include <iostream>
#include <vector>

using std::cin;
using std::vector;

int main()
{
	vector<int> inum;
	int i = 0;

	while(cin >> i)
	{
		inum.push_back(i);
	}

	return 0;
}
