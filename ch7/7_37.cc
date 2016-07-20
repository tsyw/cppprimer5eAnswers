Sales_data first_item(cin);// uses: Sales_data(std::istream &is) { read(is, *this); }

int main()
{
	Sales_data next;// uses: Sales_data(std::string s = " ") : bookNo(s) { }
	Sales_data lase("9-999-99999-9");// uses: Sales_data(std::string s = " ") : bookNo(s) { }
}
