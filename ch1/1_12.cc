#include <iostream>

int main()
{
	int sum = 0;

	for(int i = -100; i <= 100; ++i)
	{
		sum += i;
	}

	std::cout << "sum is: " << sum << std::endl;
	//The final answer is 0

	return 0;
}