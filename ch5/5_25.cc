#include <iostream>
#include <stdexcept>

using std::runtime_error;

int main()
{
	int ival1, ival2;
	while(std::cin >> ival1 >> ival2)
	{
		try
		{
			if(0 == ival2)
				throw runtime_error("the second number must not be zero!");
			std::cout << ival1 / ival2 << std::endl;
		}
		catch(runtime_error err)
		{
			std::cout << err.what() << "Enter new number pair? (y/n)";
			char c;
			std::cin >> c;
			if(!std::cin || c == 'n')
				break;
			continue;
		}
	}

	return 0;
}
