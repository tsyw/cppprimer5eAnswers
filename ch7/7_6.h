#ifndef EX7_6_H
#define EX7_6_H

#include <string>
#include <iostream>

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

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

std::istream &read(std::istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " " << item.revenue;
	return os;
}
 
 #endif
