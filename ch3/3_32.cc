#include <iostream>
#include <cstddef>
#include <vector>

using std::cout; using std::endl;
using std::size_t;
using std::vector;

int main()
{
	int iarray[10], iarray2[10];

	for(size_t ix = 0; ix < 10; ++ix)
		{
			iarray[ix] = ix;
			cout << iarray[ix] << endl;
		}

	for(size_t ix = 0; ix < 10; ++ix)
		iarray2[ix] = iarray[ix];

	vector<int> ivec, ivec2;
	for(int i = 0; i < 10; ++i)
		ivec.push_back(i);
	ivec2 = ivec;

	return 0;
}
