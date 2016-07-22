#ifndef EX7_57_H
#define EX7_57_H

#include <iostream>
#include <string>

class Account
{
public:
	Account() = default;
	Accoutn(std::istream &is){ is >> owner >> amount; }
	Account(double a, std::string o) : amount(a), owner(o) { }

	void calculate() { amount += amount * interestRate; }
	static double rate() { return interestRate; }
	static void rate(double);

private:
	double amount;
	std::string owner;
	static double interestRate;
	static double initRate();
};

void Account::rate(double newRate)
{
	interestRate = newRate;
}

double Account::initRate()
{
	return 0.0;
}

double Account::interestRate = initRate();

#endif
