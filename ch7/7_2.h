#ifndef EX7_2_H
#define EX7_2_H

#include <string>

using std::string;

struct Sales_data
{
	Sales_data &combine(const Sales_data &);
	string isbn() const;
	
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

string Sales_data::isbn() const
{
	return bookNo;
}

Sales_data &Sales_data::combine(const Sales_data &trans)
{
	units_sold +=trans.units_sold;
	revenue += trans.revenue;
	return *this;
}
 
 #endif
