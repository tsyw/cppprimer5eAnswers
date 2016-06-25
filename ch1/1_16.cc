#include <iostream>

int main()
{
	int num = 0, sum = 0;

	std::cout << "Enter numbers: ";
	while(std::cin >> num)
	{
		sum +=num;
	}

	std::cout << "sum is: " << sum << std::endl;

	return 0;
}
