#ifndef EX7_5_H
#define EX7_5_H

#include <string>

using std::string;

struct Person
{
	string getName() const { return name; }
	string getAddress() const { return address; }// should be const function, name and address might be const object or a literal

	string name;
	string address;
};

#endif
