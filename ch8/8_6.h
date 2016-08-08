#ifndef EX8_6_H
#define EX8_6_H

#include <string>
#include <iostream>

using std::string;

class Sales_data;
Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
std::istream &read(std::istream &is, Sales_data &item);
std::ostream &print(std::ostream &os, const Sales_data &item);

class Sales_data
{
	friend Sales_data add(const Sales_data &, const Sales_data &);
	friend std::istream &read(std::istream &, Sales_data &);
	friend std::ostream &print(std::ostream &, const Sales_data &);
	
public:
	Sales_data() : Sales_data("", 0, 0) { std::cout << "default" << std::endl; }
	Sales_data(const string &s) : Sales_data(s, 0, 0) { std::cout << "only a string" << std::endl; }
	Sales_data(const string &s, unsigned n, double p) : 
			   bookNo(s), units_sold(n), revenue(p * n) { std::cout << "3 objects supplied" << std::endl; }
	Sales_data(std::istream &is) : Sales_data() { read(is, *this); std::cout << "istream" << std::endl; }

	Sales_data &combine(const Sales_data &);
	string isbn() const;
	
private:
	inline double avg_price() const
	{
		return units_sold ? revenue / units_sold : 0;
	}

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
