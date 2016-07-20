#include "7_41.h"
#include <iostream>

int main()
{
	Sales_data item1;
	Sales_data item2("9-999-99999-2");
	Sales_data item3("9-999-99999-2", 3, 15);
	Sales_data item4(std::cin);

	return 0;
}
