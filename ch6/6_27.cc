#include <initializer_list>
#include <iostream>

using std::initializer_list;

void add(initializer_list<int> li)
{
	long long sum = 0;
	for(auto iter = li.begin(); iter != li.end(); sum += *iter++)
	;
	std::cout << "sum = " << sum << std::endl;
}

int main()
{
	add({1, 2, 3, 4, 5});

	return 0;
}
