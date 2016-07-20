#ifndef EX7_42_H
#define EX7_42_H

class Book;
std::istream &readBook(std::istream &, Book &);

class Book
{
public:
	Book() : Book("", "", "") { }
	Book(std::istream &is) : Book()
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

#endif
