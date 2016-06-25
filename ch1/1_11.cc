#include <iostream>

int main()
{
	int v1 = 0, v2 = 0;

	std::cout << "Enter two numbers: ";
	std::cin >> v1 >> v2;
	//Let v1 <= v2
	int tmp = v1;
	if (v1 > v2)
	{
		v1 = v2;
		v2 = tmp;
	}

	int i = v1;
	while(i <= v2)
	{
		std::cout << i++ << std::endl;
	}

	return 0;
}
