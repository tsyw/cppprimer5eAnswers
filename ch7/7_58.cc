//  example.h
class Example
{
public:
	static double rate = 6.5;// must be constexpr
	static const int vecSize = 20;
	static vector<double> vec(vecSize);// error, in-class initializer should use = or {}
};

// example.C
#include "example.h"
double Example::rate;
vector<double> Example::vec;// vector<double> Example::vec(vecSize);
