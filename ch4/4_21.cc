#include <iostream>
#include <vector>

int main()
{
	std::vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

	for(auto &i : ivec)
	{
		i = i * ((i % 2) ? 2 : 1);
		std::cout << i << std::endl;
	}

	return 0;
}
