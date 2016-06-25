#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item curr, val;

	if(std::cin >> curr)
	{
		int cnt = 1;
		while(std::cin >> val)
		{
			if(val.isbn() == curr.isbn())
			{
				++cnt;
			}
			else
			{
				std::cout << curr.isbn() << " occurs " << cnt << " times" << std::endl;
				cnt = 1;
				curr = val;
			}
		}
		std::cout << curr.isbn() << " occurs " << cnt << " times" << std::endl;
	}

	return 0;
}