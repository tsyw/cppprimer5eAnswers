class Book;
std::istream &readBook(std::istream &, Book &);

class Book
{
public:
	Book() = default;
	Book(std::istream &is)
	{
		readBook(is, *this);
	}
	Book(std::string n, std::string::a, std::string p, std::string s) : name(n), author(a), press(p), subject(s) { }

private:
	std::string name, author, press, subject;	
};

std::istream &readBook(std::istream &is, Book &item)
{
	is >> item.name >> item.author >> item.press >> item.subject;
	return is;
}
