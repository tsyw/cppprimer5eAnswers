#include <iostream>
#include <string>
//in this file, i did not use "return -1;" to exit the programme.
struct Sales_data
{
	std::string bookId;
	std::string bookName;
	unsigned units_sold = 0;
	double revenue = 0.0;
	double price = 0.0;
};

int main()
{
	Sales_data data1, data2, data3;
	unsigned total_units_sold;
	double totalRevenue;

	std::cin >> data1.bookId >> data1.units_sold >> data1.price;
	data1.revenue = data1.units_sold * data1.price;
	std::cout << data1.bookId << " " << data1.units_sold << " " << data1.revenue << std::endl;//1.20

	std::cin >> data2.bookId >> data2.units_sold >> data2.price;
	data2.revenue = data2.price * data2.units_sold;

	if(data1.bookId == data2.bookId)
	{
		total_units_sold = data1.units_sold + data2.units_sold;
		totalRevenue = data1.revenue + data2.revenue;
		std::cout << data1.bookId << " " << total_units_sold << " " << totalRevenue << std::endl;
	}
	else
		std::cerr << "Different id!";//1.21

	while(std::cin >> data3.bookId)
	{
		if(data3.bookId == data1.bookId)
		{
			std::cin >> data3.units_sold >> data3.price;
			total_units_sold += data3.units_sold;
			data3.revenue = data3.price * data3.units_sold;
			totalRevenue += data3.revenue;
		}
		else
			std::cerr << "exists a Different Id";
	}
	std::cout << data3.bookId << " " << total_units_sold << " " << totalRevenue << std::endl;//1.22

	return 0;
}
