#include <iostream>

void swapInt(int &ival1, int &ival2)
{
	int ivalTmp = 0;
	ivalTmp = ival1;
	ival1 = ival2;
	ival2 = ivalTmp;
}

int main()
{
	int ival1, ival2;
	for(; std::cout << "Enter: ", std::cin >> ival1 >> ival2;)
	{
		swapInt(ival1, ival2);
		std::cout << ival1 << " " << ival2 << std::endl;
	}

	return 0;
}
//I think using reference is better, this is no need to get the position. 
