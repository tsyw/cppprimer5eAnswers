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
	Sales_data data1, data2;
	int cnt = 1;

	if(std::cin >> data1.bookId)
	{
		std::cin >> data1.units_sold >> data1.price;
		while(std::cin >> data2.bookId)
		{
			std::cin >> data2.units_sold >> data2.price;
			if(data1.bookId == data2.bookId)
			{
				++cnt;
				data1.bookId = data2.bookId;
				data1.price = data2.price;
				data1.units_sold = data2.units_sold;
			}
			else
			{
				std::cout << data1.bookId << " " << cnt << std::endl;
				cnt = 1;
				data1.bookId = data2.bookId;
			}
		}
		std::cout << data1.bookId << " " << cnt << std::endl;

		return 0;
	}
	else
	{
		std::cerr << "No input" << std::endl;

		return -1;
	}

}
