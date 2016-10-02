#include <iostream>
#include <forward_list>

using std::forward_list;

int main()
{
	forward_list<int> flist = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
	auto prev = flist.before_begin();
	auto curr = flist.begin();
	while(flist.end() != curr)
	{
		if((*curr) % 2)
		{
			curr = flist.erase_after(prev);
		}
		++prev;
		++curr;
	}
	for(auto i : flist)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;

	return 0;
}
