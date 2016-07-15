#include <iostream>
#include <vector>

using std::cout; using std::endl; using std::cin;
using std::vector;

void print(vector<int>::iterator beg, vector<int>::iterator end)
{
	if(beg != end)
	{
		if(beg == (end - 1))
		{
			cout << *beg << endl;
			return;
		}
		else
		{
			cout << *beg << endl;
			print(beg + 1, end);
		}
	}
	else
		cout << "No value! " << endl;
}

int main()
{
	vector<int> ivec;
	int inum;
	while(cin >> inum)
		ivec.push_back(inum);
	print(ivec.begin(), ivec.end());

	return 0;
}
