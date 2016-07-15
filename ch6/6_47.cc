#include <iostream>
#include <vector>
#include <cassert>

// #define NDEBUG // or g++ -D NDEBUG -std=c++11 -o 6_47 6_47.cc

using std::cout; using std::endl; using std::cin;
using std::vector;

void print(vector<int>::iterator beg, vector<int>::iterator end)
{
	if(beg != end)
	{
		if(beg == (end - 1))
		{
			#ifndef NDEBUG
			cout << __func__ << " " << end - beg << endl;
			#endif
			cout << *beg << endl;
			return;
		}
		else
		{
			#ifndef NDEBUG
			cout << __func__ << " " << end - beg << endl;
			#endif
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
