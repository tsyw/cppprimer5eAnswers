#include <iostream>
#include <cstddef>

using std::cout; using std::endl;
using std::size_t;

int main()
{
	constexpr size_t sz = 10;
	int arr[sz];
	int *parry = arr;

	for(; parry != (arr + sz); ++parry)
		*parry = 0;

	for(auto px : arr)
		cout << px;
	cout << endl;

	return 0;
}
