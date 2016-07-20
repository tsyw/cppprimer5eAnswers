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


std::vector<C> vec(10);// legal
