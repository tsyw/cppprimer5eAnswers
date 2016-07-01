#include <iostream>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;

int main()
{
	vector<int> ivec;
	int inum = 0;

	for(int i = 1; i <= 10; ++i)
	{
		cin >> inum;
		ivec.push_back(inum);
	}

	for(auto it = ivec.begin(); it != ivec.end(); ++it)
	{
		*it = *it * 2;
		cout << *it << " ";
	}
	cout << endl;

	return 0;
}
