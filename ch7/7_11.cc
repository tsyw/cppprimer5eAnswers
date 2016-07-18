#include "7_11.h"
#include <iostream>

using std::cout; using std::cin; using std::endl;

int main()
{
	Sales_data item1;
	print(cout, item1) << endl;
	Sales_data item2("2-233-24224-2");
	print(cout, item2) << endl;
	Sales_data item3("2-233-23333-2", 5, 15.0);
	print(cout, item3) <<endl;
	Sales_data item4(cin);
	print(cout, item4) << endl;

	return 0;
}
