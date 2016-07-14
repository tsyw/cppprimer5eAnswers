#include <iostream>

int fact(const int &val)
{
	return (1 == val || 0 == val) ? 1 : fact(val - 1) * val;
}

int main()
{
	int i;
	std::cin >> i;
	std::cout << "fact of " << i << " is " << fact(i) << std::endl;

	return 0;
}
