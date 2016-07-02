#include <iostream>
#include <vector>
#include <cstddef>

using std::cout; using std::endl;
using std::vector;
using std::size_t;

int main()
{
	vector<int> ivec{1, 2, 3};
	int inum[3];
	for(auto ix = ivec.cbegin(); ix != ivec.cend(); ++ix)
		inum[ix - ivec.cbegin()] = (*ix);
	for(auto i : inum)
		cout << i << endl;

	return 0;
}
