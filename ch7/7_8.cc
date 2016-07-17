// std::istream &read(std::istream &is, Sales_data &item)//because read change the Sales_data object item
// {
// 	double price = 0;
// 	is >> item.bookNo >> item.units_sold >> price;
// 	item.revenue = price * item.units_sold;
// 	return is;
// }

// std::ostream &print(std::ostream &os, const Sales_data &item)//print does not change the Sales_data object item
// {
// 	os << item.isbn() << " " << item.units_sold << " " << item.revenue;
// 	return os;
// }
