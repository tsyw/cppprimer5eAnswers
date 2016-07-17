#ifndef EX7_9_H
#define EX7_9_H

#include <string>
#include <iostream>

using std::string;

struct Person
{
	string getName() const { return name; }
	string getAddress() const { return address; }

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
