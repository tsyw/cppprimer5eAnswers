#ifndef EX7_43_H
#define EX7_43_H

class Nodefault
{
public:
	Nodefault(int i) : ival(i) { }

private:
	int ival;
};

class C
{
public:
	C() : nd(0) { }

private:
	Nodefault nd;
};

#endif
