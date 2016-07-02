#include <iostream>
#include <cstddef>

using std::cout; using std::endl;
using std::size_t;

int main()
{
	int iarray[10];

	for(size_t ix = 0; ix < 10; ++ix)
		{
			iarray[ix] = ix;
			cout << iarray[ix] << endl;
		}

	return 0;
}
