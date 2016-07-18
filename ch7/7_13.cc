#include <iostream>
#include "7_12.h"

using std::cin; using std::cout; using std::endl; using std::cerr;

int main()
{
	Sales_data total(cin);
	if(cin)
	{
		while(cin)
		{
			Sales_data trans(cin);
			if(total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				print(cout, total) << endl;
				total = trans;
			}
		}
	}
	else
	{
		cerr << "No data?!" << endl;
	}

	return 0;
}
