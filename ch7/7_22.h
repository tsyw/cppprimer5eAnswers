#ifndef EX7_22_H
#define EX7_22_H

#include <string>
#include <iostream>

using std::string;

class Person;
std::istream &read(std::istream &is, Person &item);
std::ostream &print(std::ostream &os, const Person &item);

class Person
{
	friend std::istream &read(std::istream &, Person &);
	friend std::ostream &print(std::ostream &, const Person &);
public:
	Person() = default;
	Person(const string &s1, const string &s2) : name(s1), name(s2) { }
	Person(std::istream &is)
	{
		read(is, *this);
	}

	string getName() const { return name; }
	string getAddress() const { return address; }

private:
	string name;
	string address;
};

std::istream &read(std::istream &is, Person &item)
{
	is >> item.name >> item.address;
	return is;
}

std::ostream &print(std::ostream &os, const Person &item)
{
	os >> item.getName() >> item.getAddress();
	return os;
}

#endif
