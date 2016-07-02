#include <iostream>
#include <vector>
#include <iterator>

using std::cout; using std::endl;
using std::vector;
using std::begin; using std::end;

int main()
{
	int iarr[] = {1, 2, 3};
	vector<int> ivec(begin(iarr), end(iarr));
	for(auto ix : ivec)
		cout << ix << endl;

	return 0;
}
