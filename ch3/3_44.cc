#include <iostream>

using std::cout; using std::endl;

int main()
{
	int ia[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	using int_array = int[4];
	for(int_array &r : ia)
	{
		for(int i : r)
			cout << i << " ";
		cout << endl;
	}
	for(int_array *p = ia; p != ia + 3; ++p)
	{
		for(int *q = *p; q != *p + 4; ++q)
			cout << *q << " ";
		cout << endl;
	}
	for(int i = 0; i != 3; ++i)
	{
		for(int j = 0; j != 4; ++j)
			cout <<ia[i][j] << " ";
		cout << endl;
	}

	return 0;
}
