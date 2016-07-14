#include <iostream>
#include <iterator>

using std::begin; using std::end;
using std::cout; using std::endl;

void print(const int *beg, const int *end)
{
	while(beg != end)
		cout << *beg++ << " ";
	cout << endl;
}

void print(const int &i)
{
	cout << i << endl;
}

int main()
{
	int i{0}, j[2]{0, 1};
	print(begin(j), end(j));
	print(i);

	return 0;
}
