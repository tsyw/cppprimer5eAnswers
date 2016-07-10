#include <iostream>
#include <stdexcept>

using std::runtime_error;

int main()
{
	int ival1, ival2;
	std::cin >> ival1 >> ival2;
	if(0 == ival2)
		throw runtime_error("the second number must not be zero!");
	std::cout << ival1 / ival2 << std::endl;

	return 0;
}
