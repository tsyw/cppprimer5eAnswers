#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>

struct Sales_data
{
	std::string bookId;
	std::string bookName;
	unsigned units_sold = 0;
	double revenue = 0.0;
	double price = 0.0;
};
#endif
